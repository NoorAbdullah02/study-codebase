#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 int a,b;
 while(n--){
    cin>>a>>b;
    if (a>b){
     int temp = a;
      a = b;
      b = temp;
    }
    //cout<<a<<" "<<b<<endl;
    int sum  = 0;
    for (int i=a+1;i<b;i++){
      if (i%2!=0){
        sum += i;
      }
    }
    cout<<sum<<endl;
 }
return 0;
}