#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int res = b - a;
        cout << res << endl;
    }
    return 0;
}