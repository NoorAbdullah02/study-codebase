#include<iostream>
#include<vector>
using namespace std;
long long f(int n){
    if (n==1)return 0;
    long long sum = 0;
    int x = (n-1)/2;
    for (int i=1;i<=x;i++){
        sum += 8LL * i * i; 
    }
    return sum;
}
int main ()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 for (int i=0;i<n;i++){
    cout<<f(v[i])<<endl;
 }
return 0;
}