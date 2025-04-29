#include <iostream>
#include<string>
using namespace std;

string encrypt(string text,int key){
    for (int i=0;i<text.length();i++){
        if (isupper(text[i])){
            text[i]=(text[i]-'A' + key)%26+'A'  ;
        }
        else{
            text[i]=(text[i]-'a'+ key)%26+'a';
        }
     }
    return text;
}
string decrypt(string text,int key){
    for (int i=0;i<text.length();i++){
        if (isupper(text[i])){
            text[i]=(text[i]-'A' - key+ 26)%26+'A'  ;
        }
        else{
            text[i]=(text[i]-'a'- key+26)%26+'a';
        }
     }
    return text;
}

int main(){

    string text;
    int key;

    cout<<"Enter the plaintext-";
    cin>>text;

    cout<<"Enter key-";
    cin>>key;

    string encrytped=encrypt(text,key);
    cout<<"Encryted text-"<<encrytped<<endl;
    string dec=decrypt(encrytped,key);
    cout<<"decryted text-"<<dec<<endl;
}