#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool f(int num){
    int x = num;
    string name = "";
    while(num!=0){
        int rem = num % 2;
        name += to_string(rem);
        num /= 2;
    }
    //cout<<name<<endl;
    string name1 = name;
    reverse(name1.begin(),name1.end());
    //cout<<name1<<endl;
 if (x%2!=0 && name == name1)return true;
 else return false;
}
int main ()
{
 int num;
 cin>>num;
 int res = f(num);
 if (res)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
return 0;
}