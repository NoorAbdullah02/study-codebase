#include<iostream>
using namespace std;
class A{
public:
int a ;
void setA(){
    cout<<"Enter A : ";
    cin>>a;
}
};
class B : public A{
    public:
    int b;
    void setB(){
        cout<<"Enter B : ";
        cin>>b;
    }
};
class C{
    public:
    int c;
    void setC(){
    cout<<"Enter B : ";
    cin>>c;
    }
};
class Multi : public B,public C{
public:
void ans(){
    setA();
    setB();
    setC();
    cout<<"Multiplication is : "<<a*b*c<<endl;
}
};
int main ()
{
 Multi *m = new Multi;
 m -> ans();
return 0;
}