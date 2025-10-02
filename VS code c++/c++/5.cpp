#include<iostream>
#include<vector>
using namespace std;
int main ()
{
vector < int >v;
int n,m,b;
cin>>n>>m>>b;
int sum=0;
for (int i=0;i<n;i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}
for (int i=1;i<n;i++)
{
    v[i]=v[i-1]+v[i];
}
for (int i=1;i<n;i++)
{
    cout<<v[i]<<" ";
}

/*for (int i=0;i<n;i++)
{
    //for (int j=m;j<=b;j++)
    {
       // cout<<v[j]<<" ";

        //sum-=v[j];
    }
    break;
}
cout<<sum<<endl;*/

    return 0;

}