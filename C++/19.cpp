#include<iostream>
using namespace std;
int main ()
{
    int row,col,a,b;
    cin >>a>>b;
    for (row=1;row<=a;row++)
    {
        for (col=1;col<=b;col++)
        {
            if (row==1||row==a||col==1||col==b)
            {
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;

}

