#include <iostream>
using namespace std;
int powrecersive(int p, int q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = powrecersive(p, q / 2);
        return result * result;
    }
    else
    {
        int result = powrecersive(p, (q - 1) / 2);
        return p * result * result;
    }
}
int f(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }
    return powrecersive(a % 10, b) + f(a / 10, b);
}
int main()
{
    int num;
    cin >> num;
    int temp = num;
    int digit = 0;
    while (temp != 0)
    {
        temp /= 10;
        digit++;
    }
    int res = f(num, digit);
    if (num == res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}