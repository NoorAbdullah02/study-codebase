#include<iostream>
using namespace std;
int square(int p,int q)
{
    if (q==0)
    {
        return 1;
    }
    int square1=p*square(p,q-1);
    return square1;
}
int main ()
{
int a,b;
cin>>a>>b;
int x=square(a,b);
cout<<x;
    return 0;

}