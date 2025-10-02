//Default Constructor
#include<iostream>
using namespace std;
class student
{
public:
    int age;
    student ()
    {
        cout<<"Default Constructor"<<endl;
    }
};
int main ()
{
    student s1;
    return 0;

}
