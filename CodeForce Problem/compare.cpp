#include<iostream>
#include<string>
using namespace std;
int main ()
{
 string n,n1;
 cin>>n>>n1;
 cout<<n.size()<<" "<<n1.size()<<endl;
 string sum = n+n1;
 cout<<sum<<endl;
 swap(n[0],n1[0]);
 cout<<n<<" "<<n1<<endl;

return 0;
}