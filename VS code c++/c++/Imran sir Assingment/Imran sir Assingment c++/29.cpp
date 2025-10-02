//6. Write a C program to find the largest of three numbers. 
#include<iostream>
using namespace std;
int main ()
{
int a,b,c;
cout<<"Enter Three Numbers : ";
cin>>a>>b>>c;
if (a>b&&a>c)
{
    cout<<a<<" "<<"is the Largest Number"<<endl;
}
else if(b>a&&b>c){
        cout<<b<<" "<<"is the Largest Number"<<endl;
} 
else if (c>a&&c>b){
        cout<<c<<" "<<"is the Largest Number"<<endl;
}
else{
    cout<<"input Number is Zero"<<endl;
}

return 0;
}