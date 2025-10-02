#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main ()
{
 string n,n1;
 cin>>n;
n1 = n;
reverse(n.begin(),n.end());
if (n == n1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}