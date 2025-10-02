#include<iostream>
using namespace std;
int main ()
{
 int n,r,c;
 cin>>n;
 for (r = 1;r<=n;r++){
    for (c = 1;c<=r;c++){
        if (c%2==0){
            cout<<"0"<<" ";
        }
        else{
            cout<<"1"<<" ";
        }
    }
    cout<<endl;
 }
return 0;
}