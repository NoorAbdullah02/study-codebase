#include<iostream>
using namespace std;
int main ()
{
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 a =  a % 100;
 b = b % 100;
 c = c % 100;
 d = d % 100;
 int multi = (a*b*c*d)%100;
 if (multi < 10) cout<<"0";
 cout<<multi<<endl;
return 0;
}