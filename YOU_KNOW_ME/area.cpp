//3.141592653
#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
 double r,pi = 3.141592653;
 cin>>r;
  cout<<fixed;
  cout<<setprecision(9);
 cout<<pi*(r*r)<<endl;

return 0;
}