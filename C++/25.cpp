#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int row ,col;
for (row=1;row<=a;row++)
{
    for (col=1;col<=b;col++)
    {
        if ((row+col)%2==0)
        {
            cout<<"1";
        }else
        {
            cout<<"2";
        }
    }
    cout<<endl;
}

}

