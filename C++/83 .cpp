#include <iostream>
using namespace std;

int hcf(int a, int b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}

int main() {
    int n, n1;
    cout << "Enter Two Numbers: ";
    cin >> n >> n1;

    int result = hcf(n, n1);
    cout << "HCF = " << result << endl;

    return 0;
}
