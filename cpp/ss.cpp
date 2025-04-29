#include <iostream>
#include <string>
using namespace std;

string encrypt(string text,string key){
    string ci="";
    for (char c:text){
        if(isalpha(c)){
            if (isupper(c)){
                ci+=key[c-'A'];
            }
            else{
                ci+=tolower(key[c-'a']);
            }
        }
        else{
            ci+=c;
        }
        
    }
    return ci;
}


int main() {
    string msg, key;
    
    
    cout << "Enter plaintext-: ";
    getline(cin,msg);
    
    cout << "Key: ";
    getline(cin,key);

    string ec=encrypt(msg,key);
    cout<<"Encrypted txt-"<<ec<<endl;
    cout<<"decrypted txt-"<<msg<<endl;
    return 0;
}