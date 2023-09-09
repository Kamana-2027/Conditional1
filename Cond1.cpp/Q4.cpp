//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int area,peri,l,b;
    cout<<"Enter length:";
    cin>>l;
    cout<<"Enter breadth:";
    cin>>b;
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    cout<<"Area is Greater";
    else
    cout<<"Perimeter is Greater";
    return 0;
    

}
