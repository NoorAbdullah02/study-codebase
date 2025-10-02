//Write a Class for Rational number( p / q) with overloading + and <<operator
#include<iostream>
using namespace std;
class Rational{
    private:
    int a;
    int b;
    public:
    Rational(){}
    Rational(int a , int b){
        this -> a = a ;
        this-> b = b;  
    }
    friend Rational operator+(Rational x, Rational y);
    friend ostream& operator<<(ostream &out,Rational &r);
};
     Rational operator+(Rational x, Rational y){
       Rational temp;
     temp.a = x.a * y.b;
     temp.b =  x.b * y.a;
     return temp;
    }
    ostream& operator<<(ostream & out , Rational &r){
        out<<r.a<<"/"<<r.b<<endl;
        return out;
    }

int main ()
{
    Rational r1(2,3);
    Rational r2(4,5);
    Rational r3 = r1+r2;
    //Rational r3 = operator+(r1,r2);
    cout<<r3<<endl;
    operator<<(cout,r3);


    return 0;
}