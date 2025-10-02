#include<iostream>
using namespace std;
int main ()
{
   long long int a,b,c,d,multi = 1;
    cin>>a>>b>>c>>d;
 a = a%100;
 b = b % 100;
 c = c% 100;
 d = d % 100;
 multi = (a*b*c*d)%100;
 if (multi < 10){
    cout<<"0"<<multi<<endl;
 }
 else cout<<multi<<endl;
    return 0;
}