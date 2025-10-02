#include<iostream>
int x=10;

using namespace std;
int main ()
{
    int x=20;
    ::x=30;
    cout<< :: x;


    return 0;

}
