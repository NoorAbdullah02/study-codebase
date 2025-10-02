#include<iostream>
#include <bits/stdc++.h>
#define  ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    ll arr[n];
   
    for (int i=0;i<n;i++)cin>>arr[i];

    ll max_sub_Array = -1e18;
    ll max_sub_Array_so_far = -1e18;

    
    for (ll l=0;l<n;l++){
        max_sub_Array_so_far = max(arr[l],(arr[l]+ max_sub_Array_so_far));
        max_sub_Array = max(max_sub_Array,max_sub_Array_so_far);
    }
    cout<<max_sub_Array<<endl;
    return 0;
}
//[-2,1,-3,4,-1,2,1,-5,4]