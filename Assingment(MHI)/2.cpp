/*Task 2: Write a program to input an integer value. If the entered value is divisible by 2, 
print “Divisible by 2" otherwise print "Not divisible by 2" on the computer screen using 
conditional operator.*/
#include<iostream>
using namespace std;
class Task2{
    public:
     Task2(int x){
         if (x%2 == 0)cout<<"divisible by 2"<<endl;
    else {
        cout<<"Not divisible by 2"<<endl;
    }
     }
};
int main ()
{
  int a;
 cout<<"Enter a Integer Value : ";
 cin>>a;
 Task2 t(a);
return 0;
}