#include<iostream>
using namespace std;
int result(int x,int y)
{
    int ans=0;
    for (int i=x;i<=y;i++)
    {
      ans+=i;
    }
    return ans;

}
int main ()
{
    int x=2,y=6;
    int ans=result(x,y);
    cout<<ans<<endl;
    return 0;

}
