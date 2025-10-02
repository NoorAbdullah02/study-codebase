#include<iostream>
using namespace std;
// int f(int p,int n){
//     if (n==0) return 1;
//     return p * f(p,n-1);
    
// }
int f(int p,int q){
    if (q==0) return 1;
    if (q % 2 == 0){
        int res = f(p , q / 2);
        return res * res;
    }
    else{
        int res = f(p , (q-1) / 2);
        return p * res * res;
    }
}
int main ()
{
 int p,n;
 int ans = f(2,8);
 cout<<ans;
return 0;
}