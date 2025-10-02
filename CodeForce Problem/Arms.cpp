//C++ program to swap two numbers using class and object
#include<iostream>
#include<vector>
using namespace std;
class sagor
{
public:
   int a,b;
   int swap()
   {
        b=a+b;
        a=b-a;
        b=b-a;
        
   }
   
};

int main()

{
sagor a1;

a1.a=2;

a1.b=3;
//a1.swap();
cout << "After swapping a = " << a1.swap()<<endl;



return 0;


}