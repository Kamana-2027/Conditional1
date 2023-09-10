//Write a program to count the minimum number of notes in a given amount using the switch statement.

#include<iostream>
using namespace std;
int main(){
    int n500,n200,n100,n50,n20,n10,n5,n2,n1;
     n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    int total;
    cout<<"Enter the amount";
    cin>>total;
   
    switch(total>=500)
    {
        case 1:
        n500 = total/500;//510/500=1
        total -= n500 * 500;//total=510-500=10
        break;
        }
    switch (total>=200)
    {
        case 1:
        n200=total/200;
        total=total-n200*200;
        break;
    }
    switch (total>=100)
    {
        case 1:
        n100=total/100;
        total=total-n100*100;
        break;
    }
    switch (total>=50)
    {
        case 1:
        n50=total/50;
        total=total-n50*50;
        break;
    }
    switch (total>=20)
    {
        case 1:
        n20=total/20;
        total=total-n20*20;
        break;
    }
    switch (total>=10)
    {
        case 1:
        n20=total/10;
        total=total-n10*10;
        break;
    }
    switch (total>=5)
    {
        case 1:
        n5=total/5;
        total=total-n5*5;
        break;
    }
    switch (total>=2)
    {
        case 1:
        n2=total/2;
        total=total-n2*2;
        break;
    }
    switch (total>=1)
    {
        case 1:
        n1=total/1;
        total=total-n1*1;
        break;
    }
    cout<<"Notes of 500 are:"<<n500<<endl;
    cout<<"Notes of 200 are:"<<n200<<endl;
    cout<<"Notes of 100 are:"<<n100<<endl;
    cout<<"Notes of 50 are:"<<n50<<endl;
    cout<<"Notes of 20 are:"<<n20<<endl;
    cout<<"Notes of 10 are:"<<n10<<endl;
    cout<<"Notes of 5 are:"<<n5<<endl;
    
}
