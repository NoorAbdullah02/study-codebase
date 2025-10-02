#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print (vector<int> v,int idx){
int n = v.size();
if (idx>=n){
    return;
}

print (v,idx+2);
cout<<v[idx]<<" ";
}
int main ()
{
    int n;
    cin>>n;
vector<int> v;
for (int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
}
print(v,0);
 return 0;
}
/*
7
1 5 8 2 3 9 11
OutputCopy
11 3 8 1 
4
1 4 2 7
*/