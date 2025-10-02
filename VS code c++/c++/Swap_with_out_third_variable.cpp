#include<iostream>
using namespace std;
int main ()
{
    int n,n1;
    cin>>n>>n1;
    n1 = n+n1;
    n = n1-n;
    n1 = n1-n;
    cout<<n<<" "<<n1<<endl;
    return 0;
}
