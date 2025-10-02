#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a,b;
// cin>>a>>b;
// cout<<showpoint<<fixed<<setprecision(3);
// cout<<(a+b)/2.0<<endl;
// cout.unsetf(ios::fixed);
// cout<<noshowpoint;
// cout<<setw(15)<<(a+b)/2.0<<endl;
string txt = "Hello Good\' Morning";
string t = "Good \\ Noon";
string tx = "Good \"I\" BYE";
cout<<txt<<endl<<t<<endl<<tx<<endl;
int myNumbers[6] = {10, 20, 30, 40};
cout << sizeof(myNumbers);
string letters[2][4] = {
{ "A", "B", "C", "D" },
{ "E", "F", "G", "H" }
};
cout << letters[1][3];
    return 0;
}
