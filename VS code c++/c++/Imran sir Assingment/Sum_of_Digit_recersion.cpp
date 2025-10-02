#include<iostream>
using namespace std;
int f(int n){
    if (n<=9 && n>=1) return n;
    return f(n/10) + (n%10); 
}

int main ()
{
    int n;
    int ans = f(6584);
    cout<<ans<<endl;
    return 0;
} 