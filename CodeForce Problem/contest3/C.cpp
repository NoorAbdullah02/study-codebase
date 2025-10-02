#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while(n--){
    long long int multi = 0,m; 
    cin>>m;
    for (long long int i=1;i<=m/2;i++){
        multi += 8 * i * i;
    }
    cout<<multi<<endl;
 }
return 0;
}