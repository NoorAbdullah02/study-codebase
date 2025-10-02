#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std;
void f(vector<int> &v,int idx,int sum,vector<int> &result,int n){
    if (idx == n) {
        result.push_back(sum);
        return ;
    }
    f(v,idx+1,sum+v[idx],result,n);
    f(v,idx+1,sum,result,n);
}
int main ()
{
    int n = 3,sum = 0;
vector<int> v = {1,2,3};
vector<int> result;
f(v,0,sum,result,n);
for (int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
cout<<endl;
sort(result.begin(),result.end());
for (int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
    return 0;
}