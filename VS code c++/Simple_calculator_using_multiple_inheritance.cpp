#include <iostream>
#include <cmath>
using namespace std;
// SC = Simple Clalculator
class SC
{
protected:
    int num1, num2;
    char ch;

public:
    void cal(int a, char chr, int b)
    {
        num1 = a;
        num2 = b;
        ch = chr;
    }
    void display()
    {
        switch (ch)
        {
        case '+':
        {
            cout << "Sum is " << " " << (num1 + num2) << endl;
            break;
        }
        case '-':
        {
            cout << "Subtraction is " << " " << (num1 - num2) << endl;
            break;
        }
        case '*':
        {
            cout << "multiplication is " << " " << (num1 * num2) << endl;
            break;
        }
        case '/':
        {
            cout << "Division is " << " " << (double)num1 / (double)num2 << endl;
            break;
        }
        default:
        {
            cout << "Envalid Number" << endl;
        }
        }
    }
};
// SCC = Scientific Calculator
class SCC
{
    // protected:
    // int num1,num2;
public:
    // void scc(int a,int b){
    //     num1 = a;
    //     num2 = b;

    // }
    void display2()
    {
        int choice;
        cout << "1 for Sqrt." << endl
             << "2 for MOdulus" << endl
             << "3 for Factorial" << endl
             << "4 for nth power" << endl;
        cout << "Enter Your Choice :" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int num1;
            cout << "Enter A Number" << endl;
            cin >> num1;
            cout << "sqrt is " << " " << sqrt(num1) << endl;
            ;
            break;
        }
        case 2:
        {
            int num1, num2;
            cout << "Enter Two integer Numbers" << endl;
            cin >> num1 >> num2;
            int rem = num1 % num2;
            cout << "Modulus is " << " " << rem << endl;
            break;
        }
        case 3:
        {
            int num1, fact = 1;
            cout << "Enter A Number" << endl;
            cin >> num1;
            for (int i = 1; i <= num1; i++)
            {
                fact *= i;
            }
            cout << "Factorial is " << " " << fact << endl;
            break;
        }
        case 4:
        {
            int num1, num2;
            cout << "Enter Two  Numbers" << endl;
            cin >> num1 >> num2;
            int power = pow(num1, num2);
            cout << num1 << " " << "to the Power" << " " << num2 << " " << "is" << " " << power << endl;
            break;
        }
        default:
        {
            cout << "Envalid Number" << endl;
        }
        }
    }
};
class merge : public SC, public SCC
{
public:
    void print()
    {
    }
};
int main()
{
    merge m;
    int n;
print:
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "1 for Simple Calculator" << endl
         << "2 for Advance Calculator" << endl
         << "0 for exit" << endl;
    cout << "Enter Your Choice" << endl;
    cin >> n;
    if (n == 1)
    {
        int num1, num2;
        char ch;
        cout << "Enetr Numbers" << endl;
        cin >> num1 >> ch >> num2;
        m.cal(num1, ch, num2);
        m.display();
    }
    if (n == 2)
    {
        m.display2();
    }
    if (n == 0)
    {
        return 0;
    }
    goto print;
    
    return 0;
}