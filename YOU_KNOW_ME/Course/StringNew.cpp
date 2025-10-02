#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,ans;
    getline(cin,n);
    int i=0;
    while(i<n.size()){
        if (n[i] == '\\'){
            break;
        }
        ans += n[i];
        i++;
    }
    cout<<ans<<endl;
    
    return 0;
}