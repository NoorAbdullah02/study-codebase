#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void prefix(vector <int> &v){
   for (int i=1;i<v.size();i++)
   {
    v[i]=v[i-1]+v[i];
   }
}
int main ()
{
    int n;
    cin>>n;

vector <int> v;

for (int i=0;i<n;i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}
prefix(v);
for (int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
getch();
}