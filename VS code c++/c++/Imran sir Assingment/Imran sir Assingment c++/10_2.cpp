//c) X= a 2 +2ab+ b

#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int a,b;
 cout<<"Enter A & B"<<endl;
 cin>>a>>b;
 int x = pow(a,2)+2*a*b+pow(b,2);
 cout<<"Value of X is :"<<" "<<x<<endl;
return 0;
}