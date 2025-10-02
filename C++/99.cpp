#include <iostream>
using namespace std;

class sagor {
public:
    int a, b;
    int swap1() {
        return b = a + b, a = b - a, b = b - a;
    }
};

int main() {
    sagor a1;
    a1.a = 2;
    a1.b = 3;
    cout << "Before swapping: a = " << a1.a << ", b = " << a1.b << endl;
    cout << "After swapping: a = " << a1.swap1() << ", b = " << a1.a << endl;
    return 0;
}
