#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int sum_of_D(int n){
    int sum = 0;
    while(n>0){
        int temp = n % 10;
        sum += temp;
        n /=10;  
    }
    return sum;
}
int main(){
   int n;
   cin>>n;
int ans = 0;
   while(n>9){
    n = sum_of_D(n);
    ans++;
   }
   cout<<ans<<endl;

    
    return 0;
}