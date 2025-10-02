//3. Write a C program to find whether a given year is a leap year or not. 
#include<iostream>
using namespace std;
int main ()
{
     int year;
    cout<<"Enter Year : ";
    cin>>year;
    if ((year  % 4 == 0) || (year % 4 == 0 && year % 100!=0)){
        cout<<year<<" "<<"is a leap year"<<endl;
    }
    else{
        cout<<year<<" "<<"is a not leap year"<<endl;
    }
 
return 0;
}