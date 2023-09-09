//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include<iostream>
using namespace std;
int main(){
    char word;
    cout<<"Enter the character:";
    cin>>word;
    if(int(word)>=65 && int(word)<=90)
    cout<<"It belongs to capital letters";
    else if(int(word)>=97 && int(word)<=122)
    cout<<"It belongs to lower letters";
    else
    cout<<"It belongd to the digits";
}