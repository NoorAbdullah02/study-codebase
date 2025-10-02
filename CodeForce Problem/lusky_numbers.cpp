#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int L_st = num % 10;
    int _1st = num;
    while(_1st >=10){
        _1st /= 10; 
    }
    if (L_st == 0)cout<<"YES"<<endl;
    else if (_1st % L_st == 0 || L_st % _1st == 0) cout << "YES" << endl;
    else if (_1st == 0 || L_st == 0) cout<<"NO"<<endl;
    else cout << "NO" << endl;
    return 0;
}