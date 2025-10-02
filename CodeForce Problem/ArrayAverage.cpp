#include<bits/stdc++.h>
using namespace std;
double f(vector<int> &v,int idx,int n,int count ,int sum){
    if(idx == n)return ((double)(sum)/count);
    sum +=v[idx];
    count++;
    return (count == 0) ? '0' : f(v,idx+1,n,count,sum); 
}

int main ()
{
    int n;
    cin>>n;
 vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 int c = 0,s = 0;
 cout<<fixed<<setprecision(7)<<f(v,0,n,c,s)<<endl;
return 0;
}