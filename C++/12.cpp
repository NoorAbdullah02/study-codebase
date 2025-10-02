#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout <<"Enter The Value of A&B"<<endl;
    cin>>a>>b;
    int temp =a;
a=b;
b=temp;
cout<<a<<endl<<b   ;
    return 0;

}
