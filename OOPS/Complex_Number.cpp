#include<iostream>
using namespace std;
class Complex{
private:
int real;
int img;
public:
Complex(){}
Complex(int real,int img){
    this -> real = real;
    this -> img = img;
}
Complex operator+(Complex &a){
    Complex temp;
    temp.real = real + a.real;
    temp.img = img + a.img;
    return temp;
}
void imu(Complex c3){
cout<<c3.real<<"+i"<<c3.img<<endl;
}
};

int main(){
    Complex c1(4,8);
    Complex c2(5,5);
    Complex c3 = c1+c2;
    c3.imu(c3);

    return 0;
}