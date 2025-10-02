#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    if (b == 0)
        return a;
    return lcm(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int res = lcm(a, b);
    cout<<res<<endl;
    int lcm = (a * b) / res;
    cout << "LCM is : " << lcm << endl;
    return 0;
}
