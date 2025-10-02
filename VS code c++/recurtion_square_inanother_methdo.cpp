//recurtion is hard way buyt time_complexity is very less
#include<iostream>
using namespace std;
int square(int p,int q)
{
    if (q==0)return 1;
    if (q%2==0)
{
int result=square(p,q/2);
return result*result;
}
else{
    int result=square(p,(q-1)/2);
    return p*result*result;
}

}
int main ()
{
    int a,b;
    cin>>a>>b;
    int x=square(a,b);
    cout<<x;
        return 0;

}