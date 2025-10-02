#include<iostream>
using namespace std;
bool iprime (int num)
{
    for(int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main ()
{
    int a=2,b=10;
    for (int i=a;i<=b;i++)
    {
        if (iprime(i))
        {
            cout<<i<<endl;

        }
    }

    return 0;

}
