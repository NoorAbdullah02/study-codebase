#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while(n--){
    int rem = 0,num = 0,sum = 0;
    cin>>num;
    while(num!=0){
        rem = num %10;
        sum += rem;
        num /=10; 
    }
    cout<<sum<<endl;
 }
return 0;
}