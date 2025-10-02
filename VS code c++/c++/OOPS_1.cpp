#include <iostream>
#include <cstring>
using namespace std;
template <class T1, class T2, class T3>
class A
{
    T1 name[10];
    T2 id[10];
    T3 cgpa[10];
    static int counter;

public:
    A()
    {
        for (T2 i = 0; i < 2; i++)
        {
            cout << "Enter Student name for student " << " " << counter+1  << endl;
            getline(cin, name[i]);
            cout << "Enter Student id for student " << " " << counter+1  << endl;
            cin >> id[i];
            cout << "Enter Student CGPA for student " << " " << counter+1  << endl;
            cin >> cgpa[i];
            counter++;
        }
    }
    void display()
    {
        //counter = 0;
        for (T2 i = 0; i < 2; i++)
        {
            cout << "Student" << " " << counter+1  << " " << "Information is :" << endl
                 << "Name is :" << " " << name[i] << endl
                 << "Id is :" << " " << id[i] << endl
                 << "CGPA is :" << " " << cgpa[i] << endl;
            counter++;
        }
    }
};
 template <class T1,class T2,class T3>
int A <T1,T2,T3> :: counter;
int main()
{
    A<string, int, double> a;
    a.display();

    return 0;
}