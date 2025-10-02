#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
 int a,b,c;
 cin>>a>>b>>c;
 int x = (a*a)+(b*b);
 int y = (c*c); 
if (x==y){
    cout<<"Paytogorian Tripplate"<<endl;
}
else{
    cout<<"Not Paytogorian Tripplate"<<endl;
}
return 0;
}