#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;

    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char ch = a[0];
    char c = b[0];
    b[0] = ch; 
    a[0] = c;
    string ans = a+ " "+b;
    cout<<ans<<endl;
    
    return 0;
}