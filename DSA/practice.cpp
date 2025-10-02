#include<iostream>
using namespace std;
int f(int n){
    int k;
    int x = 1;
    if (n == 1)return x;
    for (int k=1;k<n;k++){
        x = x + f(k) * f(n-k);
    }
    return x;
}
int main ()
{
    cout<<f(5);
    return 0;
}