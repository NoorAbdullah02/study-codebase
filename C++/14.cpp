#include<iostream>
using namespace std;
int main ()

{
    int a ,b;
    a= 13;//1101
    b=10;//1010
    cout<<(a>>1)<<endl;//6
    cout<<(b<<1)<<endl;//20
    cout<<(b|a)<<endl;//15
    cout<<(b&a)<<endl;//8


    return 0;

}
