#include<iostream>
using namespace std;
int f(long long curr , long long n){
if (n == curr)return true;
if (curr>n)return false;
return f(curr*10,n) || f(curr*20,n);
}
int main (){
    int n;
    cin>>n;
    while (n--){
        long long int m;
        cin>>m;
        if (f(1,m))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}