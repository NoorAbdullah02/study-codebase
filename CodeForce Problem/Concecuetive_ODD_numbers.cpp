#include<iostream>
using namespace std;
int main ()
{
    int n,a,b;
    cin>>n;
    while(n--){
cin>>a>>b;
if (a>b){
    b = a+b;
    a = b-a;
    b = b-a;
}
int sum = 0;
for (int i=a+1;i<b;i++){
    if (i%2!=0){
        sum += i;
    }
}
cout<<sum<<endl;
    }
    return 0;
}