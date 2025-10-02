#include <iostream>
using namespace std;
class student
{
    string name;
    int id;
    int salary;
    static int count;
    static int count1;

public:
    void set();
    void get();
};
int student ::count = 0;
int student ::count1 = 0;

void student ::set()
{
    cout << "Enter name for student " << " " << count + 1 << endl;
    cin >> name;
    cout << "Enter id for Student" << " " << count + 1 << endl;
    cin >> id;
    cout << "Enter Salary for employ" << " " << count + 1 << endl;
    cin >> salary;
    count++;
}
void student ::get()
{
    cout << count1 + 1 << " " << "Student name is = " << " " << name << endl;
    cout << count1 + 1 << " " << "Student id is = " << " " << id << endl;
    cout << count1 + 1 << " " << "Student Salary is = " << " " << salary << endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    count1++;
}

int main()
{
    int n;
    cout << "Enter The Number OF Student " << endl;
    cin >> n;
    student s1[n];
    for (int i = 0; i < n; i++)
    {
        s1[i].set();
    }
    for (int i = 0; i < n; i++)
    {

        s1[i].get();
    }

    return 0;
}