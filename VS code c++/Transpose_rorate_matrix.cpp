#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate_Matrix(vector<vector<int>> &V)
{
    for (int i=0;i<V.size();i++)
    {
        for (int j=0;j<i;j++)
        {
             swap(V[i][j],V[j][i]);
        }
    }
    for (int i=0;i<V.size();i++)
    {
        reverse(V[i].begin(),V[i].end());
    }
}
int main ()
{
    int n;
    cin>>n;
    vector<vector<int> > V(n,vector<int>(n));
   
   for (int i=0;i<n;i++)
   {
    for (int j=0;j<n;j++)
    {
        cin>>V[i][j];
    }
   }
   rotate_Matrix(V);
   for (int i=0;i<n;i++)
   {
    for (int j=0;j<n;j++)
    {
        cout<<V[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;

} 