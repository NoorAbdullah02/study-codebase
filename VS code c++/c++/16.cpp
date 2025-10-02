#include<iostream>
#include<vector>
using namespace std;
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
int max=v[0];

for (int i=0;i<n;i++)
{
    if (v[i]>max)
    {
        max=v[i];
    }
}
int second_max=v[0];
for (int i=0;i<n;i++)
{
    if (v[i]>max&&second_max<v[i]){
        second_max=v[i];
    }
}
cout<<second_max<<endl;;
    return 0;

}