#include<iostream>
using namespace std;
int main ()
{
  int m,count = 1;
 cin>>m;
 for (int row = 0;row<m;row++ ){
    for (int col=0;col<row;col++){
       cout<<count<<" ";
       ++count;
    }
    cout<<endl;
 }
return 0;
}