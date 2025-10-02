#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate_vector(vector<vector<int>> &vec){
for (int i=0;i<vec.size();i++)
    {
        for (int j=0;j<i;j++)
        {

            swap(vec[i][j],vec[j][i]);
            

    }
    }
    for (int i=0;i<vec.size();i++)
    {
        reverse(vec[i].begin(),vec[i].end());
    }
}
int main ()
{
  int n;
  cin>>n;
    vector<vector<int>> vec(n,vector<int>(n));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    rotate_vector(vec);
    cout<<endl<<endl<<endl;
    for (int i=0;i<vec.size();i++)
    {
        for (int j=0;j<vec.size();j++)
        {

            cout<<vec[i][j]<<" ";
            

    }
    cout<<endl;
    }
    
    return 0;

}