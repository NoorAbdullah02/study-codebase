#include<iostream>
using namespace std;
class cat{
    public:
   virtual void speak(){
        cout<<"maw maw"<<endl;
    }
};
class dog : public cat{
    public:
    void speak(){
        cout<<"Ghaw Ghaw"<<endl;
    }
};
int main ()
{
 cat *c = new dog();
 c->speak();
return 0;
}