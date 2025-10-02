#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res = a+ (a-1);
    int ans = max(res,(b+(b-1)));
    cout<<max(ans,(a+b));
    return 0;
}