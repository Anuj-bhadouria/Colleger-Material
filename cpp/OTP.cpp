#include <iostream>
#include <string>
using namespace std;

string encrypt(string text,string key){
while (key.size() < text.size()){
        key += key;
    }
    string ci;
for(size_t  i=0;i<text.length();i++){
    char x=text[i]^key[i];
    x='A'+(x%26);
    ci+=x;
}
    cout<<"Cipher text-"<<ci<<endl;
    cout<<key<<endl;
    
    string og;
    for(size_t  i=0;i<ci.length();i++){
        og+=ci[i]^key[i];
    }
    cout<<"Decrypted text-"<<og<<endl;

    return 0;
}



int main() {
    string msg, key;
    
    
    cout << "Enter plaintext-: ";
    getline(cin,msg);
    
    cout << "Key: ";
    getline(cin,key);

    encrypt(msg,key);

    return 0;
}
