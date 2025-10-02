#include<iostream>
using namespace std;
class X{
    private:
    int x;
    int y;
    public:
    X(){
        cout<<"x is called"<<endl;
    }
    X(int x,int y){
     cout<<"X is :"<<x<<" "<<y<<endl;
    }
};
class Y : public X{
private:
int d;
public:
Y(){
   
};
Y(int x,int y ,int d) : X(x,y){
    cout<<"d is : "<<d<<endl;
} 
};
int main ()
{
    Y a;

 
return 0;
}