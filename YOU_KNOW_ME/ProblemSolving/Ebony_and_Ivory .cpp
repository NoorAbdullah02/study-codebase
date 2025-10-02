#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int ebony,ivory,dante;
    cin>>ebony>>ivory>>dante;
    for (int i=0;i<=dante;i+=ebony){
        for (int j=0;j<=dante;j+=ivory){
            if (i+j == dante){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}