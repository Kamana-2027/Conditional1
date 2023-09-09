//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    int m,n;
    cout<<"Enter x1:";
    cin>>x1;
    cout<<"Enter x2:";
    cin>>x2;
    cout<<"Enter x3:";
    cin>>x3;

    cout<<"Enter y1:";
    cin>>y1;
    cout<<"Enter y2:";
    cin>>y2;
    cout<<"Enter y3:";
    cin>>y3;
    
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);

    if(m==n)
    cout<<"The three points fall on one straight line";
    else
    cout<<"The three points does not fall on one straight line";
    return 0;

    
}