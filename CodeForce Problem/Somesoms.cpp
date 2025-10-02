#include <iostream>
using namespace std;
int main()
{
    char ch;
    int n;
    cin >> ch >> n;
    switch (ch)
    {
    case '+':
    {
        while (n--)
        {
            int num;
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cout << ch;
            }
            cout << endl;
        }
        break;
    }

    case '-':
    {
        while (n--)
        {
            int num;
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cout << ch;
            }
            cout << endl;
        }
        break;
    }
    case '*':
    {
        while (n--)
        {
            int num;
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cout << ch;
            }
            cout << endl;
        }
        break;
    }
    case '/':
    {
        while (n--)
        {
            int num;
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cout << ch;
            }
            cout << endl;
        }
        break;
    }
    }

    return 0;
}