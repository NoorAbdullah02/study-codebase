#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    float n, n1;
    n = 24, n1 = 17;
    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);
    cout << setw(20) << "Sum is :" << " " << n + n1 << endl;
    cout << setw(20) << "Subtraction is :" << " " << n - n1 << endl;

    cout << setw(20) << "Multiplication is :" << " " << n * n1 << endl;
    cout << setw(20) << "Division is :" << " " << n / n1 << endl;

    return 0;
}