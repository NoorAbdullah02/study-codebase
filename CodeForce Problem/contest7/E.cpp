#include<iostream>
using namespace std;
int f( long long int a,long long int b){
    while (b != 0){
        long long int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    while (n--){
        long long int a,b;
        cin>>a>>b;
       long long int gcd = f(a,b);
       long long int lcm = (a/gcd)*b;
        cout<<lcm<<" "<<gcd<<endl;
    }
    return 0;
}