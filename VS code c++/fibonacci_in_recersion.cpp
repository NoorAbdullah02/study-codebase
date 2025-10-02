#include<iostream>
using namespace std;
int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    int fib1=fib(x-1);
    int fib2=fib(x-2);
    return fib1+fib2;
}
int main ()
{
 int f;
 cin>>f;
 int fibo = fib(f);
 cout<<fibo;
return 0;
}