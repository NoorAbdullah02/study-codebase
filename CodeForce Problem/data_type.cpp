#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double a,b,c;
    cin>>a>>b>>c; // 10 20 40
    double k = (a*b)/c; //  0.75
    long long result = k ;   // 0
    double my_res = result - k ;  // .75
    if (my_res<0) cout<<"double"<<endl;
    else if (result >= -2147483648 && result <=2147483647) cout<<"int"<<endl;
    else{
        cout<<"long long"<<endl;
    }
    return 0;
}