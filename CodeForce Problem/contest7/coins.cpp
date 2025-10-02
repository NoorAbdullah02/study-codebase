#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while (n--){
    int a,b;
    cin>>a>>b;
    if (n % 2 == 0 )cout<<"YES"<<endl;
    else if (b % 2 == 1)cout<<"YES"<<endl;
    else cout<<"NO\n";
 }
return 0;
}