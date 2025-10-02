//C++ Program to write your name using class and object.
#include<iostream>
using namespace std;
class Name{
    public:
    string n;
    void print(){
        cout<<n<<endl;
    }
};
int main ()
{
    Name n1;
    n1.n = "Noor";
    cout<<"My name is : ";
    n1.print();
return 0;
}