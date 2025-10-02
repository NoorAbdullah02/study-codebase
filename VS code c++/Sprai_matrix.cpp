#include<iostream>
#include<vector>
using namespace std;
void spairal_matrix(vector<vector<int>> &V)
{
    int left= 0;
    int right= V[0].size()-1;
    int top=0;
    int bottom=V.size()-1;
    int direction = 0;
    while(left<=right&&top<=bottom)
    {
        if (direction == 0)
        {
            for (int col=left; col<right;col++)
            {
                cout<<V[top][col]<<" ";
            }
            top++;
        }
        else if (direction ==1)
        {
             for (int row=top;row<bottom;row++)
             {
                cout<<V[row][right]<<" ";
             }
             right--; 
        }
        else if(direction ==2)
        {
            for (int col=right;col>=left;col--)
            {
                cout<<V[bottom][col]<<" ";
            }
            bottom--;
        } 
        else{
            for (int row=bottom;row>=top;row--)
            {
                cout<<V[top][bottom]<<" ";
            }
            left++;
        }
        direction=(direction+1)%4;
    }
}

int main ()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> V(m,vector<int>(n));
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>V[i][j];
        }
    }
    spairal_matrix(V);
    return 0;

}