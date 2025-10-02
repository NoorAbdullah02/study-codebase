#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans = INT16_MIN;
    for (int i=0;i<n;i++)cin>>arr[i];
    
    for (int l=0;l<n;l++){
        for (int r=l;r<n;r++){
           int sum = 0;
            for(int i=l;i<=r;i++){
                sum += arr[i];
            }
            ans = max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}
//[-2,1,-3,4,-1,2,1,-5,4]