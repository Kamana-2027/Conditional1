//Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. 

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0)
    cout<<"Its a Leap Year";
    else
    cout<<"Not a Leap Year";
    return 0;
    

}