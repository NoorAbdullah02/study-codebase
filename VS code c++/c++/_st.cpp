#include<iostream>
using namespace std;
void fact(int x){
    for (int i=1;i<=x;i++){
        cout<<i;
        if (i<x){
            cout<<" ";
        }
        
    }
}
int main ()
{
long long int n;
cin>>n;
fact(n);
return 0;
}
