#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    for (int col = 0;col<n;col++){
        for (int row = 0;row<n;row++){
            arr[row][col] = '*';
        }
    }
    for (int i=0;i<n;i++)
    {
        arr[i][i] = '\\';
        arr[i][n-i-1] = '/';
    }
    arr[n/2][n/2] = 'X';
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}