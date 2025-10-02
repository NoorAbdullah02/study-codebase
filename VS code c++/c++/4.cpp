#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
bool suffix_preffix(vector <int> &v)
{
    int total_sum=0;
    int prefix_sum=0;
    for (int i=0;i<v.size();i++)
    {
       //v[i]=v[i]+v[i];
       prefix_sum+=v[i];
    }
    for (int i=0;i<v.size();i++)
    {
        total_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
if (suffix_sum==prefix_sum)
{
    return true;
}


    }

return false;
}
int main ()
{

 int n;
 cin>>n;
 vector<int>v;
 for (int i=0;i<n;i++)
 {
    int a;
    cin>>a;
    v.push_back(a);
 }
 cout<<suffix_preffix(v)<<endl;;


    getch ();
}