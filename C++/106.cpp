#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        if (is_sorted(arr,arr+a) || b>1){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
return 0;
}
