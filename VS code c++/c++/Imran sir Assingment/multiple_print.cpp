#include<iostream>
using namespace std;
void f(int num,int a){
    if (a == 0) return ;
    f(num,a-1);
    cout<<num*a<<" ";
}
int main ()
{
    f(3,5);
    return 0;
}