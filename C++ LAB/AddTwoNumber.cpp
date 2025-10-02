#include<iostream>
using namespace std;
class add{
    int a,b;
    public:
    add(int a,int b){
        this -> a = a;
        this -> b = b;
    }
    int get(){
        return a+b;
    }
};
int main ()
{
 int x,y;
 cout<<"Enter Two Numbers : "<<endl;
 cin>>x>>y;
 add *a1 = new add(x,y);
 cout<<a1->get()<<endl;
return 0;
}