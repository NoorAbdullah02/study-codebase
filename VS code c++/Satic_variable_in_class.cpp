#include <iostream>
using namespace std;
class Employ
{
    int id;
    static int count;

public:
    void get()
    {
        cout << "Enter id " << endl;
        cin >> id;
        count++;
    }
    void set()
    {
        cout << "ID is " << " " << id << " " << "The Employ Number is" << " " << count << " " << endl;
    }
};
int Employ ::count = 1000; // Static data member
int main()
{
    Employ e1, e2;
    e1.get();
    e1.set();
    e2.get();
    e2.set();

    return 0;
}