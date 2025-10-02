#include<iostream>
using namespace std;
int main ()
{
    int r,r1,c,c1;
    cin>>r>>c;
    int arr[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0;i<c;i++)
    {
        for (int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}