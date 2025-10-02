#include<iostream>
using namespace std;
 class hello {
    public :
    virtual void fun(){
        cout<<"Hello"<<endl;
    };
    virtual void fun2() = 0;     
    virtual void fun3(){cout<<"Good"<<endl;
    };   
};
class world : public hello{
    public:
    void fun(){
        cout<<"Good Bye"<<endl;
    }
    void fun2(){
        cout<<"That's Nice"<<endl;
    }
};
int main ()
{
 hello *h = new world();
 h->fun();
 h->fun3();
return 0;
}