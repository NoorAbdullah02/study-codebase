#include<iostream>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
   long long int multi = a*b*c*d;
   cout<<multi<<endl;
        int rem = multi%10;
        multi /= 10;
        int rem1 = multi%10;
        cout<<rem1<<rem<<endl;
        
    return 0;

}