#include<iostream>
using namespace std;
class Rectangle {
    public :
    double l;
    double b;
    double area(){
        return l * b;
    }
};
int main ()
{
    Rectangle r1;
    r1.l = 20.36;
    r1.b = 25.36;
    cout<<r1.area()<<endl;
 
return 0;
}