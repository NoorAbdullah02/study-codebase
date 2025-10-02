#include<iostream>
using namespace std;
int HCF(int a,int b){
    if (b == 0) return a;
    else
    return HCF(b,a%b);
}
int main ()
{
    int x,y;
    cout<<"Enter Two Numbers : ";
    cin>>x>>y;
    int hcf = HCF(x,y);
    cout<<"HCF is = "<<hcf<<endl;
    return 0;
}