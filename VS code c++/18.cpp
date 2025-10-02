#include<iostream>
using namespace std;
int main ()
{
    cout<<"Enter ROW AND COLOUME"<<endl;
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int j=0;j<col;j++)
    {
        for (int i=0;i<row;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}