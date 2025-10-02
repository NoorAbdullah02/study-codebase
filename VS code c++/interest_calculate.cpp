#include <iostream>
using namespace std;
class Interest
{
private:
    int taka;
    double interest;
    int year;

public:
    Interest(){};
    Interest(int t, double i, int y)
    {
        taka = t;
        interest = i;
        year = y;
        int SI = taka * interest * year;
        taka += SI;
    }
    // Interest(int t, int i, int y)
    // {
    //     taka = t;
    //     interest =(double) i;
    //     year = y;
    //     int SI = taka * ((int)interest)/100 * year;
    //     taka += SI;
    // }
    void print();
};
void Interest ::print()
{
    cout << "After" << " " << year << " " << "year your interest is" << " " << taka << endl;
}
int main()
{
    Interest b1;
    int taka, year;
    double interest;

    cin >> taka >> interest >> year;
    b1 = Interest(taka, interest, year);

    b1.print();

    return 0;
}