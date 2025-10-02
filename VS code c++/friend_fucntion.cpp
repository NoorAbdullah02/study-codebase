#include <iostream>
using namespace std;
class student1;

class student
{
    int value;

public:
    void set(int x)
    {
        value = x;
    }
    friend void sum(student, student1);
};
class student1
{
    int age;

public:
    void set1(int y)
    {
        age = y;
    }
    friend void sum(student, student1);
};
void sum(student s1, student1 s2)
{
    cout << "Sum is = " << (s1.value + s2.age) << endl;
}
int main()
{
    student s1;
    student1 s2;
    s1.set(3);
    s2.set1(5);
    sum(s1, s2);
    return 0;
}