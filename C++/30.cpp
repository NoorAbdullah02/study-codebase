#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num,rem=0,sum=0,m=0;
    cin>>num;
    int power=1;
    while(num!=0)
    {
        //Binary System
        rem=num%2;
        sum+=rem*power;
        power*=10;
        num=num/2;


    }
    cout<<sum;
    return 0;
}
