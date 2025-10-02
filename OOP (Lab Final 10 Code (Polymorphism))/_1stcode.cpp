//Question 1: Write a program to add two integers and two floating-point numbers using function overloading.
#include<iostream>
using namespace std;
class sum{
    public:
    int add(int a,int b){
        return a+b;
    }
    float add(float a,float b){
        return a+b;
    }
};
int main ()
{
 sum s;
    cout << "Sum of integers: " << s.add(5, 3) << endl;
    cout << "Sum of floats: " << s.add(5.5f, 3.2f) << endl;
return 0;
}