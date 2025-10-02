#include<iostream>
using namespace std;
class adi
{

private :
    string x;
public:
    void get(string y)
    {
     x=y;
    }
    string seter(){
    return x;
    }

};

int main ()
{
 adi s1;
 s1.get("Imran");
 cout<<s1.seter();

    return 0;

}
