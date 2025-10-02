#include <iostream>
#include <algorithm>
using namespace std;
class student
{
protected:
    int a, b;

public:
    student(int x, int y) : a(x), b(y)
    {
    }
 virtual void display()
    {
        cout << "End of vecetation" << endl;
    }
};

class X : public student
{
    string name;
    int id;
    double cgpa;

public:
    X(string n, int i, double c, int x, int y) : student(x, y)
    {
        name = n;
        id = i;
        cgpa = c;
    }
    void display()
    {
        cout << "name is" << " " << name << endl;
        cout << "ID is" << " " << id << endl;
        cout << "CGPA is" << " " << cgpa << endl;
    }
};
class Y : public student
{
    string name, name1;

public:
    Y(string name, string name1, int x, int y) : student(x, y)
    {
        this->name = name;
        this->name1 = name1;
    }
    void display()
    {
        cout << "Concatination name is " << " " << name + name1 << endl;
        cout << " Name Size is " << " " << name.size() << endl;
        cout << "Name1 size is " << " " << name1.length() << endl;
    }
};
int main()
{
    int x = 10, y = 20;
    string n = "Abdullah";
    int id = 10;
    double cgpa = 3.45;
    string n2 = "Imran";
    string n3 = "Adiba";
    student obj1(x, y);
    // obj1.display();
    X obj2(n, id, cgpa, x, y);
    // obj2.display();
    Y obj3(n2, n3, x, y);
    // obj3.display();
    //  student *ptr[2];
    //  ptr[0] = obj2;
    // student *s[2]; 
    // s[0] = &obj2;
    // s[1] = &obj3;
    // s[0]->display();
    // s[1]->display();
    student *s;
    s = &obj3;
    s->display();

    return 0;
}