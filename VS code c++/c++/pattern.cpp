#include<iostream>
using namespace std;
int main ()
{

 int m,n;
 cin>>m>>n;
 for (int row = 1;row<=m;row++ ){
    for (int col=1;col<=n;col++){
        if(row==1 ||row == m ||col == 1|| col == n){
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