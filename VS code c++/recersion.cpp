#include<iostream>
using namespace std;
int fact(int x)
{
    if (x==1)
    {
        return 1 ;
    }
    int fact1 = x*fact(x-1);
    return fact1;
}
int main ()
{
    int x;
    cin>>x;
    int fact1=fact(x);
    cout<<fact1;
    return 0;

}