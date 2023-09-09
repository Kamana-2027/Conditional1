//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side:";
    cin>>a;
    cout<<"Enter 2nd side:";
    cin>>b;
    cout<<"Enter 3rd side:";
    cin>>c;
    if(a==b && b==c)
    cout<<"Its an Equilateral Triangl";
    else if (a==b||b==c||c==a)
    cout<<"Its an Isosceles Triangle";
    else
    cout<<"Its a Scalene Triangle";

}
