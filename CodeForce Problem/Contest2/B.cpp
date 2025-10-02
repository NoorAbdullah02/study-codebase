#include<iostream>
#include<vector>
using namespace std;
int main ()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
int x = min(a,min(c,d));
int y = a-x;
int z = min(b,y);
cout<<256*x+32*z<<endl;
return 0;
}