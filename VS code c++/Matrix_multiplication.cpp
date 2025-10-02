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
   while (c1!=r2)
   {
    cout<<"matrix multiplication is not possible"<<endl;
break;
   }
   int C[r1][c2];
   for (int i=0;i<r1;i++)
   {
    for (int j=0;j<c2;j++)
    {
                C[i][j]=0;

        for (int k=0;k<r2;k++)
        {
            C[i][j]+=A[i][k]*B[k][j];
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