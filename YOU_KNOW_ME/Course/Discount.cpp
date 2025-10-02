#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;

    double total_dis = a-b;
    double percentage = total_dis/a * 100;
    cout<<fixed<<setprecision(6)<<percentage<<endl;
    
    return 0;
}