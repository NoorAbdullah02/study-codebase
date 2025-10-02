#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int row1,col1,row2,col2;
    cout<<"Enter Row And Coloume For A Matrix"<<endl;
    cin>>row1>>col1;
    int A[row1][col1];
    for (int i=0;i<row1;i++)
    {
        for (int j=0;j<col1;j++)
        {
            cin>>A[row1][col1];
        }
    }
    cout<<"Entre ROE AND COLOUME FOr B Matrix"<<endl;
    cin>>row2>>col2;
    int B[row2][col2];
    for (int i=0;i<row2;i++)
    {
        for (int j=0;j<col2;j++)
        {
            cin>>B[row2][col2];
        }
    }
   // int row,col;
    int C[row1][col2];
     for (int i=0;i<row1;i++)
     {
        for (int j=0;j<col2;j++)
        {        C[i][j]=0;
            for (int a=0;a<row2;a++)
            {
                C[i][j]+=A[i][a]*B[a][j];
            }
        }
     }
     for (int i=0;i<row1;i++)
     {
        for (int j=0;j<col2;j++)
        {
               cout<<C[i][j]<<" ";
        }
        cout<<endl;
     }
    getch ();
}