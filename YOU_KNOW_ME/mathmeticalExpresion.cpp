#include<bits/stdc++.h>
 using namespace std;
int main ()
{
 int a,b,c,d,e,f;
 char ch,ch1;
 cin>>a>>ch>>b>>ch1>>f;
 c = a+b;
 d = a-b;
 e = a*b;
switch(ch){
case '+':{
    if (a+b == f)cout<<"Yes"<<endl;
    else cout<<c<<endl;
    break;
}
case '-':{
     if (a-b == f)cout<<"Yes"<<endl;
    else cout<<d<<endl;
    break;
}
case '*':{
     if (a*b == f)cout<<"Yes"<<endl;
    else cout<<e<<endl;
    break;
}
}
return 0;
}