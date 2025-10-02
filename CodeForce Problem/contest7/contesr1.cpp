#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while (n--){
    string n,n1;
    cin>>n>>n1;
    int sum = n.size()+n1.size();
    cout<<sum<<endl;
 }
return 0;
}