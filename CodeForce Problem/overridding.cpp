#include<iostream>
using namespace std;
class sum{
    public:
    void get(){
        cout<<"Hello World"<<endl;
    }
    void get1(){
        cout<<"MAIN CLASS IS CALLED"<<endl;
    }
};
class hum : public sum{
    public :
    void get(){
          cout<<"Derived Class is Called"<<endl;
        }
};
int main()
{
 hum h;
 h.get();
 h.get1();
return 0;
}