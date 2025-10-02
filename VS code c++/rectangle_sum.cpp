#include<iostream>
#include<vector>
using namespace std;
int rectangle (vector<vector<int>> &Matrix,int r1,int r2,int c1,int c2)
{
    int sum=0;
    for (int i=r1;i<=c1;i++){

        for (int j=r2;j<=c2;j++)
        {
            sum+=Matrix[i][j];
        }
    }
    return sum;
}
int main ()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> Matrix(m,vector<int>(n));
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>Matrix[i][j];
        }
    }
    int r1,r2,c1,c2;
    cin>>r1>>c1>>c1>>r2;
    int sum = rectangle(Matrix,r1,r2,c1,c2);
    cout<<sum<<endl;
    return 0;

}