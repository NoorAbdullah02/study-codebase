#include<iostream>
using namespace std;
using ll = long long;
void check(ll &n){
     if (n%2 == 0){
        n = n/2;
    }
    else{
        n = (n*3)+1;
    }
}
int main(){
     
     ll n;
     cin>>n;
     //cout<<n<<" ";
     while(true){
        cout<<n<<" ";
        if (n == 1){
            break;
        }
        check(n);
        
     }
   // cout<<n<<endl;
    
    return 0;
}