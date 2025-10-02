#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 for (int r=1;r<=n;r++){
    for (int c = 1;c<=r;c++ ){
        cout<<"*";
    }
    int space = 2*n - 2*r;
    for (int c = 1;c<=space;c++){
       cout<<" ";
    }
    for (int c = 1;c<=r;c++){
        cout<<"*";
    }
    cout<<endl;
 }
  for (int r=n;r>=1;r--){
    for (int c = 1;c<=r;c++ ){
        cout<<"*";
    }
    int space = 2*n - 2*r;
    for (int c = 1;c<=space;c++){
       cout<<" ";
    }
    for (int c = 1;c<=r;c++){
        cout<<"*";
    }
    cout<<endl;
 }
return 0;
}