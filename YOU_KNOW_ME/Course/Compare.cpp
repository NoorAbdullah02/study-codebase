#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // char ch = 'p';

    // cout<<(int)ch<<endl;

    string a,b;
    cin>>a>>b;
    int a_len = a.size();
    int b_len = b.size();
    int minimum = min(a_len,b_len);

    for (int i=0;i<minimum;i++){
        if(a[i]>b[i]){
            cout<<b<<endl;
            return 0;
        }
        else if (a[i]<b[i]){
            cout<<a<<endl;
            return 0;
        }
    }

    if (a_len<b_len)cout<<a<<endl;
    else cout<<b<<endl;

    return 0;
}