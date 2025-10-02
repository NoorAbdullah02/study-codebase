#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string str;
    void write(void);

public:
    void get(void);
    void ones(void);
    void display(void);
};
void binary ::get(void)
{
    cout << "Enter A Number" << endl;
    cin >> str;
}
void binary ::write(void)
{
    bool is_binary = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' && str[i] == '1')
        {
            is_binary = true;
        }
    }
    if (is_binary)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
void binary ::ones(void)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            str[i] = '1';
        }
        else
        {
            str[i] = '0';
        }
    }
    write();  //Nesting of member function//
}
void binary ::display(void)
{
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
int main()
{
    binary b1;
    b1.get();
    b1.display();
    b1.ones();
    b1.display();
    return 0;
}