#include<iostream>
using namespace std;
class stu
{
    public:
    int id;
    float gpa;
};
int main ()
{
    stu s1;
    cin>>s1.id;
    cin>>s1.gpa;
    cout<<s1.id<<endl<<s1.gpa<<endl;

    return 0;

}
