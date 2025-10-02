#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    b = a+b;
     a = b-a;
     b = b-a;
    int j = a;
    while (j<=b){
        
        if (a>b){
            b = a+b;
            a = b-a;
            b = b-a;
        }
        //cout<<a<<" "<<b<<endl;;
        int sum = 0;
for (int i=a;i<=b;i++){
     if (b<=0){
            break;
        }
cout<<i<<" ";
sum +=i; 
if (i == b) cout<<"sum "<<"="<<sum<<endl;
}
cin>>a>>b;
if (b<=0){
            break;
        }
j++;  
    }
    return 0;
}