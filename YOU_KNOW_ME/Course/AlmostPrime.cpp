#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    int check = 0;
    for (int i=1;i<=n;i++){
        if (n%i == 0)check++;
    }
    if (check == 2)return true;
    else return false;
}
bool Almost_prime(int n){
    int check = 0;
for (int i=1;i<=n;i++){
    if (n%i == 0){
        if (is_prime(i))check++;
    }
}
if (check == 2)return true;
else return false;
}
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for (int i=1;i<=n;i++){
        if (Almost_prime(i))ans++;
    }
    cout<<ans<<endl;
    
    return 0;
}