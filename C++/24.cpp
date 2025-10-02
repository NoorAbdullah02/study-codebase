#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    for (int col=1;col<=a;col++)
    {
        for (int row =1;row<=b;row++)
        {
            if (row==1||col==1||col==a||row==b)
            {
                cout<<row;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}
