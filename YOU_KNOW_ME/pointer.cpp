#include<iostream>
using namespace std;
int main ()
{
 int x,y;
 cin>>x>>y;
 int *a = &x;
 int *b = &y;
 int c = *a+*b;
 int d = *a-*b;
 cout<<c<<endl;
 if (d < 0)cout<<-d<<endl;
 else cout<<d<<endl;
return 0;
}