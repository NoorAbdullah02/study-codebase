#include<iostream>
#include<cmath>
using namespace std;
int main (){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int result = pow(a,b);
    long long int result1 = pow(c,d);

    if (result>result1)cout<<"YES"<<endl;
    else if (result == result1 ) cout<<"NO"<<endl;
    else cout<<"NO"<<endl;
    // int x = pow(5,2);
    // int y = pow(5,2);
    // cout<<x<<" "<<y<<endl;
    return 0;
}