#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for (int j = 0;j<n;j++){
        long long  a,b,sum = 0;
        cin>>a>>b;
        sum = ((b-a+1) * (a+b))/2;
        cout<<sum<<endl;
    }
  
return 0;
}