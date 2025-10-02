#include<bits/stdc++.h>
using namespace std;
int findmax(vector<int> v,int n){
    int large = INT_MIN;
    for (int i=0;i<n;i++){
        large = max(v[i],large);
    }
    return large;
}
void f(vector<int> &v,int n){
    int *c;
    int Max = findmax(v,n);
    int size = Max+1;
    c = new int [size]();
    for (int i=0;i<n;i++){
        c[v[i]]++;
    }
    int i = 0 , j = 0;
    while(i<Max+1){
        if (c[i]>0){
            v[j++] = i;
            c[i]--;
        }
        else{
            i++;
        }
    }
}
int main ()
{
    vector<int> v = {10,5,6,2,5,8,1,6};
    f(v,v.size());
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}