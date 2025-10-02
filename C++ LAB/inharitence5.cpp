/*4.Write a C++ program to implement a class called Shape with public member functions for calculating area 
and perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and display 
relevant properties.*/
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area() = 0; // pure Virtual Function
    virtual void perimeter() = 0; // pure Virtual Function
};
class Circle : public Shape{
    public:
    int r;
    Circle(float r){
        this -> r = r;
    }
   const float pi = 3.1416;
    void area(){
        cout<<"Area of a Circle is "<<pi*(r*r)<<endl;
    }
    void perimeter(){
        cout<<"perimeter of a Circle is "<<2*pi*r<<endl;
    }
};
class Rectangle : public Shape{
    public:
    float w,l;
    Rectangle(float w,float l):w(w),l(l){};
    void area(){
        cout<<"Area of a Rectangle is "<<w*l<<endl;
    }
    void perimeter(){
        cout<<"Area of a perimeter is "<<2*(l+w)<<endl;
    }
};
class Triangle : public Shape{
  public:
  float a,b,c;
  float base,height;
  Triangle(float a,float b,float c,float base,float height) :a(a),b(b),c(c),base(base),height(height){};
  void area(){
    float res = (height*base)/2;
    cout<<"Area of a Triangle is "<<res<<endl;
  }
  void perimeter(){
  if ((a+b)>c){
    cout<<"Perimeter of a Triangle is Not Possible Because the Condition is (a+b)>c"<<endl;
  }
  else{
    float res = a+b+c;
    cout<<"Perimeter of a Triangle is "<<res<<endl;
  }
  }
};
int main ()
{
 int n;
 cout<<"1.Rectangle"<<endl<<"2.Circle"<<endl<<"3.Triangle"<<endl<<"4.Exit"<<endl;
 print:
 cout<<"Enter Option : ";
 cin>>n;
 if (n>=1 && n<=4){
 if(n==1){
    float w,l;
    cout<<"Enter Width : ";
    cin>>w;
    cout<<"Enter Length : ";
    cin>>l;
    Shape *r = new Rectangle(w,l);
    r->area();
    r->perimeter();
 }
 if (n == 2){
   float a;
   cout<<"Enter Radius : ";
   cin>>a;
   Shape *c = new Circle(a);
   c->area();
   c->perimeter();
 }
 if (n==3){
 float a,b,c;
 float h,base;
 cout<<"Enter Value of A B & C : ";
 cin>>a>>b>>c;
 cout<<"Enter Height : ";
 cin>>h;
 cout<<"Enter Base : ";
 cin>>base;
 Shape *t = new Triangle(a,b,c,h,base);
 t->area();
 t->perimeter();
 }
 if (n==4)return 0;
 }
 else {
    cout<<"Invalid Number"<<endl;
 }
 goto print;
 return 0;
}