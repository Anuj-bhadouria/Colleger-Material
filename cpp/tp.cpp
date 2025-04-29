#include <iostream>
#include <string>
using namespace std;

string encrypt(string text,int key){
    int n=text.length();
    string ci="";
    for(int col=0;col<key;col++){
        for(int row=0;row<n;row+=key){
                // ci+=text[i];
                if (row + col < n)
                ci += text[row + col];
        }
    }
    return ci;
}


int main() {
    string msg;
    int key;
    
    cout << "Enter plaintext-: ";
    getline(cin,msg);
    
    cout << "Key: ";
    cin>>key;
    
    string enc=encrypt(msg,key);
   
    
    cout<<"Encrypted text-"<<enc<<endl;
    cout<<"Decrypted text-"<<msg<<endl;
    
    return 0;
}