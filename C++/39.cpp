#include<iostream>
using namespace std;
int main ()
{
    int t1=0,t2=1;
    int next_term=0,n;
    cin>>n;
    cout<<t1<<" "<<t2;
    for (int i=3;i<=n;i++)
    {
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        cout<<" "<<next_term;
    }
    cout<<endl;
    return 0;


}
