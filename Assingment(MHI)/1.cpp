/*Task 1: Analyze the scenario and construct a program which asks for a number input from 
the keyboard. Add 40 to the number and then divide it by 5. Now, take modulus of that 
number with 2 and then multiply the resultant value by 10. Display the result. */
#include<iostream>
using namespace std;
class Calculate{
    public:
    Calculate(int n){
         int x = (n+40)/5;
         int y = (x%2)*10;
        cout<<y<<endl;
    }
};
int main ()
{
 int a;
 cout<<"Enter a Number : ";
 cin>>a;
 Calculate ans(a);

return 0;
}
