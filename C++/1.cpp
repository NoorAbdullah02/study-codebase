#include<iostream>
#include<iomanip
using namespace std;
int main ()
{
    int num1,num2;
    cout<<setw(20)<<"Enter two Numbers :"<<endl;
    cin >>num1>>num2;
    cout<<showpoint;
    int sum= num1+num2;
    cout<<"Sum is = "<<sum<<endl;
    int Subtraction = num1-num2;
    cout<<"Subtraction is = "<<Subtraction<<endl;
    cout<<fixed;
    cout<<setprecision(2);
    float division = (float)num1/(float)num2;
    cout<<"Division is = "<<division<<endl;



    return 0;

}
