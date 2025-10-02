#include<iostream>
using namespace std;
int main ()
{
    int n3;
    cin>>n3;
 
 
  for(int i=0;i<n3;i++){
    string n,n1;
    getline(cin,n);
    getline(cin,n1);
    swap(n[0],n1[0]);
     cout<<n<<" "<<n1<<endl;
  }

return 0;
}       
