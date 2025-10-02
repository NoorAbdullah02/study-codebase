#include<iostream>
using namespace std;
bool isodd(int num)
{
    if ((num%2)==0){
        return false;
    }
    else
    {
        return true;
    }

}
int main ()
{

    for (int i=1;i<=10;i++)
    {
        if (isodd(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;

}
