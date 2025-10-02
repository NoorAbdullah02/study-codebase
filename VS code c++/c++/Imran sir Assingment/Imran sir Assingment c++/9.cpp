//9. Write a C Program to convert Celsius value into Fahrenheit value. 
#include<iostream>
using namespace std;
int main ()
{
 double celci;
 cout<<"Enter Celcius Value"<<endl;
 cin>>celci;
 int far = (celci*9/5.0)+32;
 cout<<"Farenhite is :"<<" "<<far<<endl;

return 0;
}