#include<iostream>
using namespace std;
int sum(int x)
{
    if (x<=9&&x>=0)
    {
        return x;
    }
    int sum1=sum(x/10)+(x%10);
    return sum1;
}
int main ()
{
    int x;
    cin>>x;
    int f=sum(x);
    cout<<f;
 
return 0;
} 