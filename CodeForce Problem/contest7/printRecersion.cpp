// #include<iostream>
// using namespace std;
// using ll = long long int ;
// ll print(ll n){
//     if(n == 0)return 1;
//     return print(n-1)*n;
// }
// int main ()
// {
//     ll n;
//     cin>>n;
//     cout<<print(n)<<endl;
 
// return 0;
// }
#include<iostream>
using namespace std;
using ll = long long int ;
void print(ll n){
    if(n == 0)return ;
    if (n == 1){
        cout<<n;
        print(n-1);
        return ;
    }
    cout<<n<<" ";
    print(n-1);
}
int main ()
{
    ll n;
    cin>>n;
    print(n);
 
return 0;
}