#include<iostream>
using namespace std;
int fact(long long int x){
   if (x == 0)return 1;
   return fact(x-1) * x;
}
int main ()
{
    int n;
    cin>>n;
 for (int i=0;i<n;i++){
    for (int j = 0;j<=i;j++){
        cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
    }
    cout<<endl;
 }
return 0;
}