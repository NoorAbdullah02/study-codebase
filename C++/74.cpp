#include<iostream>
using namespace std;
int main ()
{
int r1,r2,c1,c2;
    cout<<"Enter Row And Coloume for A MAtrix"<<endl;

cin>>r1>>c1;
    int A[r1][c1];


    cout<<"Enter A MAtrix"<<endl;
   for (int i=0;i<r1;i++)
   {
    for (int j=0;j<c1;j++)
    {
cin>>A[i][j];
    }
   }
       cout<<"Enter Row And Coloume for B MAtrix"<<endl;
    cin>>r2>>c2;

      int B[r2][c2];

    cout<<"Enter B MAtrix"<<endl;
   for (int i=0;i<r2;i++)
   {
    for (int j=0;j<c2;j++)
    {
cin>>B[i][j];
    }
   }
   if (c1!=r2)
   {
    cout<<"matrix multiplication is not possible"<<endl;

   }
   int C[r1][c2];
   for (int i=0;i<c1;i++)
   {
    for (int j=0;j<r2;j++)
    {
        for (int k=0;k<c2;k++)
        {
            C[i][k]+=A[i][k]*B[k][j];
        }
    }
   }
   for (int i=0;i<r1;i++)
   {
    for (int j=0;j<c2;j++)
    {
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;

}
