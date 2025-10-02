#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(vector<int> &v,int idx,int &sum){
    if (idx == v.size())return sum;
sum += v[idx];
f(v,idx+1,sum);
}
int main ()
{
    int n,sum = 0;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<f(v,0,sum)<<endl;
    return 0;
}