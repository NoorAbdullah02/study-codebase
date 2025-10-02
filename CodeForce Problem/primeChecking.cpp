#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 if (n<=1){
    cout<<"NO"<<endl;
    return 0;
 }
bool check = true;
 for (int i=2;i*i<=n;i++){
    if(n % i == 0){
        check = false;
        break;
    }
 }
 if (check)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 return 0;
}