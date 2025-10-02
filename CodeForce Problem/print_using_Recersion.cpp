#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print (string &s,int idx,int n){
    if (idx == n)return ;
    if (idx == n-1){
        cout<<s[idx];
        print(s,idx+1,n);
        return;
    }
    cout<<s[idx]<<" ";
    print(s,idx+1,n);

}
int main (){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        string str = to_string(num);
        // cout<<str.size()<<endl;
        print(str,0,str.size());
        cout<<endl;
    }
return 0;
}
/*
3121
121
39
123456
Output
1 2 1 
3 9 
1 2 3 4 5 6
 */