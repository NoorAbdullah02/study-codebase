#include<iostream>
#include<vector>

using namespace std;
int maximum_ones_in_row(vector <vector<int>> &v)
{
    int maxOnes=INT8_MIN;
    int maxOnesrow=-1;
    int coloume=v[0].size();
    for (int i=0;i<v.size();i++)
    {
        for (int j=0;j<v[i].size();j++)
        {
            if (v[i][j]==1)
            {
             int numberofones = coloume  - j;
              if (numberofones>maxOnes){
               maxOnes = numberofones; 
               maxOnesrow = i;

              }
              break;

            }
        }
    }
return maxOnesrow;

}
int main ()
{
    int m,n;
     cin>>m>>n;
 vector<vector<int>> vec(m,vector<int>(n));
 for (int i=0;i<m;i++)
 {
    for (int j=0;j<n;j++)
    {
        cin>>vec[i][j];
    }
    int result=maximum_ones_in_row(vec);
    cout<<result<<endl;
 }
    return 0;

}