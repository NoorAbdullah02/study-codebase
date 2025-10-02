#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool is_beautiful(int n){
   int d1 = n%10;
   n /=10;
   int d2 = n%10;
   n/=10;
   int d3 = n%10;
   n/=10;
   int d4 = n%10;
   n/=10;

   if (d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4)return true;
   return false;

}
int main(){
    int n; cin>>n;
    n++;
    while(true){
        if (is_beautiful(n)){
            cout<<n<<endl;
            return 0;
        }
        n++;
    }
    return 0;
} 