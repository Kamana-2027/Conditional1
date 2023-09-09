//If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.

#include<iostream>
using namespace std;
int main(){
    float mark1,mark2,mark3;
    cout<<"Enter 1st mark:";
    cin>>mark1;
    cout<<"Enter 2nd mark:";
    cin>>mark2;
    cout<<"Enter 3rd mark:";
    cin>>mark3;
    if(mark1<mark2 && mark1<mark3)
    cout<<mark1<<"-"<<"Mark 1 is least marks";
    else if(mark2<mark1 && mark2<mark3)
    cout<<mark2<<"-"<<"Mark 2 is least marks";
    else
    cout<<mark3<<"-"<<"Mark 3 is least marks";
    return 0;

}
