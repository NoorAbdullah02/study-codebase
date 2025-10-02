#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin.getline(s,100);
        cout<<s<<endl;
    }
    
    return 0;
}