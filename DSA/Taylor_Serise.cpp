#include<iostream>
using namespace std;
double f(int x,int n){
     static double i = 1;
    if (n == 0) return i;
    i = 1+x*i/n;
    return f(x,n-1);
}
int main ()
{
    double ans = f(2,5);
    cout<<ans<<endl;
    return 0;
}