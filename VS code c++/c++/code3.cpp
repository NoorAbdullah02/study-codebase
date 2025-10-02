#include<iostream>
#include<cstring>
using namespace std;
class A{
    public:
A(){
    string n,n1,n2,n3;
    cin>>n>>n1>>n2>>n3;
    if (n1==n3){
        cout<<"ARE Brothers"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
}
};
int main ()
{
 A a;

return 0;
}