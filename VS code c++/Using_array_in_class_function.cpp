#include <iostream>
using namespace std;
class student
{
    int n;
    int *id;
    int *mark; 

public:
    student(int size);
    void set(void);
    void get(void);
};
student ::student(int size)
{
    n = size;
    id = new int[n];
    mark = new int[n];
}
void student ::set()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter ID AND MArk For Student" << " " << i + 1 << endl;
        cin >> id[i] >> mark[i];
    }
}
void student ::get()
{
    for (int i = 0; i < n; i++)
    {
        cout << "ID is : " << " " << id[i] << "Mark is :" << mark[i] << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of Students" << endl;
    cin >> n;
    student s1(n);
    s1.set();
    s1.get();

    return 0;
}