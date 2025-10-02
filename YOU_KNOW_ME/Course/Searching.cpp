#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int key;cin>>key;

    for (int i=0;i<n;i++){
        if (v[i] == key){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}