//Write C++ program to find the HCF of two numbers
#include<iostream>
using namespace std;
int main ()
{
    int n,n1,ans = 0;
    cout<<"Enter Two Numbers : ";
    cin>>n>>n1;
    
        if (n>n1){
            ans = n- n1;
        }
        else {
            ans = n1 - n;
        }
    
    cout<<"HCF = "<<ans<<endl;
 
return 0;
}