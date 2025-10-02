#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int id;

public:
    student(string name1, int idx)
    {
        name = name1;
        id = idx;
    }
    void get(void);
};

void student ::get()
{
    cout << "name is " << " " << name;
    cout << "ID is " << " " << id;
}

class student1 : public student
{
private:
    double MATH;
    double ICT;

public:
    student1(double x, double y)
    {
        MATH = x;
        ICT = y;
    }
    void get1()
    {
        cout << "MATH Mark is " << " " << MATH << endl;
        cout << "ICT Mark is " << " " << ICT << endl;
    }
    double get5()
    {
        return MATH;
    }
    double get6()
    {
        return ICT;
    }
};

class student2 : public student1
{
public:
    double parsentage;

    void display()
    {
        get();
        get1();

        parsentage = (get5() + get6()) / 2;

        cout << "parsentage is " << " " << parsentage << endl;
    }
};

int main()
{
    student s1;
    s1.set("Abdullah", 10);
    student1 s2;
    s2.set1(90.65, 26.85);
    student2 s3;
    s3.display();

    return 0;
}