#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
 int ans = 0;
 int a1,a2,b1,b2;
 cin>>a1>>a2>>b1>>b2;
 if ((a1>b1 && a2>b2) ||(a1>b2 && a2>b1)) ans += 2;
 if ((a2>b1 && a1>b2) && (a2>b2 && a1>b1)) ans +=2;
 cout<<ans<<endl;
    }
return 0;
}