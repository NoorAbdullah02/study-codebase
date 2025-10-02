#include<iostream>
using namespace std;
class Rectangle{
    private:
    float lenth;
    float heigth;
    public:
    Rectangle(float lenth,float height){
      this -> lenth = lenth;
      this -> heigth = height;
    }
    float ans(){
        return lenth*heigth;
    }
};
int main ()
{
    float a,b;
    cin>>a>>b;
    // Rectangle r1(a,b);
    // cout<<r1.ans()<<endl;
    // Rectangle *r2 = new Rectangle(a,b);
    // cout<<r2->ans();
    Rectangle *p =  new Rectangle(a,b);
    // p-> lenth = a;
    // p-> heigth = b;
    cout<<p->ans()<<"\n";
//     Rectangle x,*q;
//     q = &x;
//     q-> lenth = a;
//     q -> heigth = b;
//    cout<<q->ans()<<endl;
    return 0;
}