#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
int count=0;
    vector<int>v;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for (int i=0;i<v.size();i++)

{
if (v[i]==10)
{
    cout<<i<<endl;
    count++;
    break;

}


} 
if (count==0)

{
    cout<<"-1" ;
}

   return 0;

}