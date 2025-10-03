#include <iostream>
using namespace std;
int p(int a){
    int r = a;

    if(a%2==0){
        r = r - (r/2);
        while(a%2==0){
            a/=2;
        }
    }
    for(int i=3;i*i<=a;i+=2){
        if(a%i==0){
            r = r - (r/i);
            while(a%i==0){
                a/=i;
            }
        }
    }
    if(a>1){
        r = r - (r/a);  
    }
    return r;
}
int main() {

    int n;cin>>n;
    while(n--){
        int a;cin>>a;
        cout<<p(a)<<endl;
    }
    return 0;
}