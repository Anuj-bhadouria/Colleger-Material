#include <iostream>
using namespace std;

string encrypt(string message, string key) {
    string result = "";
    int keyLen = key.length();
    int j = 0;  

    for (int i = 0; i < message.length(); i++) {
        char m = message[i];

        // If it's a letter
        if (isalpha(m)) {
            char k = key[j % keyLen];
            int shift = tolower(k) - 'a'; 

            if (isupper(m)) {
                result += char((m - 'A' + shift) % 26 + 'A');
            } else {
                result += char((m - 'a' + shift) % 26 + 'a');
            }

            j++;  
        } else {
            
            result += m;
        }
    }

    return result;
}

int main() {
    string message, key;

    cout << "Enter message: ";
    getline(cin, message);  

    cout << "Enter keyword (letters only): ";
    cin >> key;

    string encrypted = encrypt(message, key);

    cout << "Encrypted message: " << encrypted << endl;

    return 0;
}
