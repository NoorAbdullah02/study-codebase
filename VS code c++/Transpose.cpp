#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    int row,col;
    cin>>row>>col;
    vector<vector<int>> V(row,vector<int>(col));
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cin>>V[i][j];
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<i;j++)
        {
            swap(V[i][j],V[j][i]);
        }

    }
    for (int i=0;i<row;i++)
    {
        reverse(V[i].begin(),V[i].end());
    }
    cout<<endl<<endl;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
