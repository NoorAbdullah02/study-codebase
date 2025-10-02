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
friend Complex operator+(Complex a,Complex b);
// void imu(){
// cout<<real<<"+i"<<img<<endl;
//}
friend ostream & operator<<(ostream &out,Complex &c);
};
ostream & operator<<(ostream & out,Complex& c){
      out<<c.real<<"i"<<c.img<<endl;
      return out;
}
   Complex operator+(Complex a,Complex b){
     Complex t;
     t.real = a.real + b.real;
     t.img = a.img + b.img;
return t;
}
int main(){
    Complex c1(4,8);
    Complex c2(5,5);
    // Complex c3 = c1+c2; 
    Complex c3 = operator+(c1,c2);
    // c3.imu();
    cout<<c3;
    //operator<<(cout,c3);
    return 0;
}