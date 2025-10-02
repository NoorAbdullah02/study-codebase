#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    while(n--){
 int num;
 cin>>num;
vector<int> v;
 v.empty();
 while(num!=0){
   v.push_back(num%2);
    num /= 2; 
 }
// reverse(v.begin(),v.end());
 string count;
 for (int i = 0;i<v.size();i++){
    if (v[i] == 1 ){
        count.push_back(to_string(1)[0]);
    }
 }
//  for (int i = 0;i<v.size();i++){
//     cout<<count[i]<<" ";
//  }cout<<endl;
 int sum = 0;
 for (int i=0;i<count.size();i++){
    if (count[count.size()-i-1] == '1'){
        sum += pow(2,i);
    }
 }
 cout<<sum<<endl;
    }
    return 0;
}
/*3
10
7
8
OutputCopy
3
7
1*/