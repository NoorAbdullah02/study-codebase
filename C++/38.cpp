#include<iostream>
using namespace std;
bool is_prime(int num)
{
    for (int i=2;i<num;i++)
    {
        if (num%i==0){

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
    int n;
    cin>>n;
    for (int i=2;i<=n;i++)
    {
        if (is_prime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;

}
