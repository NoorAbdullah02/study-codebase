#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int num){
if (num == 0)return;
vector<int> v;
v.clear();
while(num!=0){
    v.push_back(num%2);
    num /=2;
}
for (int i=v.size()-1;i>=0;i--){
    cout<<v[i];
}cout<<endl;
print(num);
}

int main (){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
       
        print(num);
    }
    return 0;
     
}
/*
2
10
3
OutputCopy
1010
11*/