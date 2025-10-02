#include<iostream>
using namespace std;
int f(int x){
    if (x == 0)return 1;
    return f(x-1)*x;
}
int main ()
{
    int a;
    cin>>a;
 int res = f(a);
 string n = to_string(res);
 cout<<"Number of digits of 5! is "<<n.size()<<endl;
return 0;
}