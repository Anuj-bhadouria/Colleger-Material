#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int key[2][2];

    cout << "Enter the 2x2 key matrix (4 numbers between 0-25):" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "key[" << i << "][" << j << "]: ";
            cin >> key[i][j];
        }
    }

    string message;
    cout << "Enter the message (no spaces, even length): ";
    cin >> message;

    if (message.length() % 2 != 0) {
        cout << "Message length must be even!" << endl;
        return 1;
    }

    string encrypted = "";

    for (int i = 0; i < message.length(); i += 2) {
        // Convert both uppercase and lowercase to number (0–25)
        int a = tolower(message[i]) - 'a';
        int b = tolower(message[i + 1]) - 'a';

        int x = (key[0][0] * a + key[0][1] * b) % 26;
        int y = (key[1][0] * a + key[1][1] * b) % 26;

        // Convert back to letter
        encrypted += (x + 'a');
        encrypted += (y + 'a');
    }

    cout << "Encrypted message: " << encrypted << endl;
    return 0;
}
