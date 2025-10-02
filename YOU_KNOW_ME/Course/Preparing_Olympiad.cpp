#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r,x;cin>>n>>l>>r>>x;
    int c[n];
    for (int i=0;i<n;i++){
        cin>>c[i];
    }
    int ans = 0;
    for(int mask = 0;mask<(1<<n);mask++){
        int total_problems = 0,total_difficulty = 0;
        int min_difficulty = 1e6+9,max_difficulty = 0;
        for(int i=0;i<n;i++){
            if((mask >> i) & 1){
            total_problems++;
            total_difficulty += c[i];
            max_difficulty = max(max_difficulty,c[i]);
            min_difficulty = min(min_difficulty,c[i]);
        }
    }
    if(total_problems>= 2 && total_difficulty >= l && total_difficulty <=r && abs(min_difficulty-max_difficulty) >= x){
        ans++;
    }
    }
    cout<<ans<<endl;
    return 0;
}