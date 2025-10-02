#include<iostream>
using namespace std;
using ll = long long int;
int main (){
     
    print:
        ll a,b;
        cin>>a>>b;
        if (b <= 0 || a <= 0)return 0;

        if (a>b){
            swap(a,b);
        }
       
        ll n = b-a+1;
        ll sum = (n*(a+b))/2;
        for (ll i=a;i<=b;i++){
            cout<<i<<" ";
        }cout<<"sum ="<<sum<<endl;
    goto print;

    return 0;
}