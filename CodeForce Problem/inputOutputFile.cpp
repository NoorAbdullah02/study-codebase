#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while (n--){
    int m;
    cin>>m;
    vector<int> v(m);
    for (int i=0;i<m; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    bool check = false;
    if (v.size() % 2 == 0){
    for (int i=0;i<m-2;i=i+1){
        if (v[i]+v[i+1]>v[i+2]){
            check = true;
            break;
        }
    }
    }
    else{
        for (int i=0;i<m-2;i=i+1){
        if (v[i]+v[i+1]>v[i+2]){
            check = false;
            break;
        }
    }}//1 2 4 6 8 3>4 = false , 6>6 = false , 8>8 = false
    //1 1 4 4 5 7 2>4 = false , 5>4 = true , 9>7 = true
    if (v.size() == 2){
        cout<<"YES"<<endl;
        break;
    }
    else if (check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
return 0;
}