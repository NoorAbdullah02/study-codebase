// Deep Copy Example. in copy constructor
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int *id;
    student() {}
    student(string name, int i)
    {
        (*this).name = name;
        this->id = new int;
        *id = i;
    }
    student(student &obj)
    {
        name = obj.name;
        id = new int;
        *id = *obj.id;
    }
    void get()
    {
        cout << " Name is " << " " << name << endl;
        cout << " Id is " << " " << *id << endl;
    }
};
int main()
{
    student s1("Abdullah", 10);
    student s2(s1);
    s1.get();
    *(s2.id) = 8;
    s2.get();

    return 0;
}