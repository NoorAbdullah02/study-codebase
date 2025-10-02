#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long int a,b,c,d,x,last2;
 cin>>a>>b>>c>>d;
 x = (a*b*c*d);
last2 = x%100;
cout<<last2<<endl;
return 0;
}