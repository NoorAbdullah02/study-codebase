#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    while (cin >> n)
    {
        vector<int> v;
        int t = n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                n /= i;
            }
        }
        if (n > 1)
            v.push_back(n);
        cout << "1";
        for (auto x : v)
        {
            cout << " x " << x;
        }
        cout << endl;
    }
    return 0;
}