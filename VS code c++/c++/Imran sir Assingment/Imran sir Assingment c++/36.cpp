//Write C++ program to find Armstrong numbers between 1 to n 
#include<iostream>
using namespace std;
int main ()
{
    int num1,num2,rem = 0;
    cout<<"Enter Two Numbers"<<endl;
    cin>>num1>>num2;
    for (int i = num1; i<=num2; i++)
    {
        int sum = 0;
        int x = i;
        while(x!=0){
        rem = x % 10;
        sum += (rem*rem*rem);
        x /= 10; 
        }
        if (sum == i) cout<<i<<endl;
    }
    return 0;
}