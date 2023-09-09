//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

#include<iostream>
using namespace std;
int main(){
    int radius,area,circum;
    cout<<"Enter radius:";
    cin>>radius;
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    if(area>circum)
    cout<<"Area is greater";
    else
    cout<<"Circumference is greater";
    return 0;

}
