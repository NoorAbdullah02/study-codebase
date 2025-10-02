#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];
    
    for (int l=0;l<n;l++){
        for (int r=l;r<n;r++){
            for(int i=l;i<=r;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}