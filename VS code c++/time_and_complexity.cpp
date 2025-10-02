#include<iostream>
using namespace std;
int result(int x,int y)
{
    int ans=0;
    for (int i=x;i<=y;i=i+1)
    {
      ans+=i;
    }
    return ans;
}
 int result1(int x,int y)
{
    int n = (y-x+1);
    int a=x;
    int result=n*(2*a+(n-1)*1)/2;
       return result;
}
int main ()
{
    int x=1,y=3;
    int ans=result(x,y);
    cout<<"fast time"<<" "<<ans<<endl;
    int ans1=result(x,y);
    cout<<"less time"<<" "<<ans1<<endl;
    return 0;

}