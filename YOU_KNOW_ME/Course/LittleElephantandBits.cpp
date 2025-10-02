#include<iostream>
#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 9;
char ch[n];
int main(){
    cin>>ch;
    int first_zero = -1;
    int l = strlen(ch);
    for (int i=0;i<l;i++){
      if (ch[i] == '0'){
        first_zero = i;
        break;
      }
    }
    if (first_zero == -1){
        for (int i=0;i<l-1;i++){
            cout<<ch[i];
        }cout<<endl;
    }
    else{
    for (int i=0;i<l;i++){
        if (i == first_zero)continue;
        cout<<ch[i];
    }cout<<endl;
    }
    return 0;
}