#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int a1 = a*a;
    int b1 = b*b;
    int c1 = c*c;
    int res = a1+b1;
    if (res<c1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

    
    return 0;
}