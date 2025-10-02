#include<bits/stdc++.h>
using namespace std;
int f(int x,int y){
    if (y == 0)return x;
    return f(y,x%y);
}
int main ()
{
 int n;
 int a,b;
 cin>>n;
 cin>>a>>b;
 vector<int> v;
 for (int i = a;i<=b;i++){
       v.push_back(i);
    } 
 while(n--){
     int x = INT_MIN;
     int count = 0;
    for(int i=0;i<v.size();i++){
        for (int j = i;j<v.size();j++){
            x = max(f(v[i],v[j]),x);
        }
    //     if (x != 1){
    //        count++;
    // }
    }
    // if (count == 0){
    //     cout<<1<<endl;
    // }
    // else cout<<count<<endl;
    cout<<x<<endl;
 }
return 0;
}