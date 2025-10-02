//1. Write a C++ program to check whether a given number is even or odd. 
#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter A Number : ";
    cin>>num;
    if(num%2==0){
        cout<<num<<" "<<"is a Even Number"<<endl;
    }
    else{
        cout<<num<<" "<<"is a Odd Number"<<endl;
    }
    return 0;
}
