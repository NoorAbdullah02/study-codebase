#include<iostream>
using namespace std;
template<class A,class A1,class A2>
class base{
    A name;
    A1 id;
    A2 cgpa;
    public:
    base(A n,A1 i,A2 c):name(n),id(i),cgpa(c){
        cout<<name<<endl<<id<<endl<<cgpa<<endl;
    }
};
int main ()
{
 base <string ,float ,int> b("Abdullah",10.26,3.45);
return 0;
}