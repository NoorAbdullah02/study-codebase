#include<iostream>
using namespace std;
int main ()
{
 int a,b;
 char ch;
 cin>>a>>ch>>b;
 bool res = false;
 switch(ch){
    case '>':{
        res = a>b;
        break;
    }
    case '<':{
        res = a<b;
        break;
    }
    case '=':{
        res = a==b;
        break;
    }
 }
 if (res)cout<<"Right"<<endl;
 else cout<<"Wrong"<<endl;
return 0;
}