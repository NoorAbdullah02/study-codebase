#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
class Base
{
protected:
    T1 name;
    T2 id;
    T3 cgpa;

public:
    Base(T1 n, T2 i, T3 c) : name(n), id(i), cgpa(c)
    {
    }
};
template <class T1, class T2, class T3>
class Base2 : public Base<T1,T2,T3>
{
protected:
    T3 Math;
    T3 Physics;

public:
    Base2(T1 n, T2 i, T3 c, T3 m, T3 p) :Base<T1,T2,T3>(n,i,c)
    {
        Math = m;
        Physics = p;
    }
};
template <class T1, class T2, class T3>
class Derived :  public Base2<T1,T2,T3>
{
    T3 total_mark;
    T3 Pasentage;

public:
Derived(){};
    Derived(T1 n, T2 i, T3 c, T3 m, T3 p) : Base<T1,T2,T3>(n,i,c),Base2<T1,T2,T3>(n,i,c,m,p)
    {
        total_mark = Math + Physics;
        parsentage = total_mark / 2;
    }
    void display()
    {
        cout << "student Name is " << " " << name << endl;
        cout << "student ID is " << " " << id << endl;
        cout << "student Total_Mark is " << " " << total_mark << endl;
        cout << "student Parsentage is " << " " << parsentage << endl;
    }
};
int main()
{
    int n;
    cout << "Enter Size" << endl;
    cin >> n;
   
    Derived< string , int , float> *ptr = new Derived <string,int,float> [n];
    for (int i=0;i<n;i++)
    {
        cout << "Enter Student Information for Student " << " " << i + 1 << endl;
        string name;
        int id;
        float cgpa, math, physics;
        cout << "Enter Student Name for Student :" << " " << i + 1 << endl;
        cin >> name;
        cout << "Enter Student Id for Student :" << " " << i + 1 << endl;
        cin >> id;
        cout << "Enter Student Age for Student :" << " " << i + 1 << endl;
        cout << cgpa;
        cout << "Enter Student Math Exam Mark for Student :" << " " << i + 1 << endl;
        cout << math;
        cout << "Enter Student Physics Exam MArk for Student :" << " " << i + 1 << endl;
        cout << physics;
        ptr[i] = Derived<string,int,float>(name,id,cgpa,math,physics);
    }
    for (int i=0;i<n;i++){
     ptr[i].display();
    }

    return 0;
}