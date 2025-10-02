#include<iostream>
using namespace std;
int main ()
{
 double a;
 cin>>a;
 int i = a;
 double res = a-i;
 if (res>0)cout<<"float "<<i<<" "<<res<<endl;
 else{
    cout<<"int "<<i<<endl;
 }

return 0;
}