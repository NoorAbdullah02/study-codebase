#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int a = n.size();
    if (a==4){
        cout<<n<<endl;
        return 0;
    }

    int x = 4 - a;
    
        string ele = string(x,'0');

    string res = ele + n;
    cout<<res<<endl;
    return 0;
}