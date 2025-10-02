#include <iostream>
using namespace std;
class student
{
    string name;
    int id;

public:
    void set(string name1, int id)
    {
       this-> name = name1;
       this-> id = id;
    }
    void get()
    {
        cout << name << endl;
        cout << id << endl;
    }
};
int main()
{
    string name;
    int id;
    int n;
    cout << "Enter How many student Information You Want" << endl;
    cin >> n;
    student *ptr = new student[n];
    student *ptr_temp = ptr;//&(*ptr);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Student Name And Student Id for " << i + 1 << endl;
        cin >> name >> id;
        ptr->set(name, id);
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Studen" << " " << i + 1 << " " << "information is :" << endl;
        ptr_temp->get();
        ptr_temp++;
    }
    return 0;
}
