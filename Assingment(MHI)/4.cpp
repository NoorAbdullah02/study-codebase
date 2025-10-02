/*Task 4: Write a program which takes temperature in Celsius as input and then display the 
values after converting it to Kelvin and Fahrenheit. */
#include<iostream>
using namespace std;
class Celcius{
    public:
    float c;
    Celcius(float c){
        this -> c = c;
    }
    void Fahrenheit(){
        cout<<"Fahrenheit is : "<<(9.0/5.0)*c+32<<endl;
    }
    void kalvin(){
       cout<<"Kalvin is : "<<c+273.15<<endl;
       Fahrenheit();
    }
};
int main ()
{
    float a;
    cout<<"Enter Celcius Value : ";
    cin>>a;
    Celcius c(a);
    c.kalvin();
return 0;
}