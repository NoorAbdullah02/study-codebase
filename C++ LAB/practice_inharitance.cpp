#include<iostream>
using namespace std;
class cat{
    public:
   void cat1(){
cout<<"meaw meaw"<<endl;
    }
};
class dog : public cat {
    public:
    void dog1(){
     cout<<"Ghaw Ghaw"<<endl;
    }
};
int main ()
{
    dog *d1 = new dog;
    d1 -> cat1();
    d1 -> dog1();

return 0;
}