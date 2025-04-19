/**
 * Ques : Write a C++ program to input any character and check whether 
 * it is the alphabet, digit or special character.
 */
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any characcter : ";
    cin>>ch;
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        cout<<"It is a alphabet";
    }else if(ch >= '0' && ch <= '9'){
        cout<<"It is a digit";
    }else{
        cout<<"It is a special character";
    }
}