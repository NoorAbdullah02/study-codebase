//2. Write a C++ program to check whether a given number is positive or negative. 
#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter A Number : ";
    cin>>num;
    if (num<0){
        cout<<num<<" "<<"is a Negative Number"<<endl;
    }
    else if (num>0){
        cout<<num<<" "<<"is a Positive Number"<<endl;
    }
    else{
        cout<<"Input Number is Zero"<<endl;
    }
    return 0;
}
