#include<iostream>
using namespace std;
int main()
{
    int temp,cou,sum=0,rev=0,rem=0;
    int num;
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    cout<<sum<<endl;
    return 0;
}
