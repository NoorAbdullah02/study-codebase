#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 for (int r=1;r<=n;r++){
    int c;
    for (c=1;c<=(n-r);c++){
        cout<<"  ";
    }
    int k = r;
    for (;c<=n;c++){
        cout<<k--<<" ";
    }
    k = 2;
    for (;c<=(n+r-1);c++){
        cout<<k++<<" ";
    }
    cout<<endl;
 }
return 0;
} 