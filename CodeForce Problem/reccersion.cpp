#include<iostream>
#include<vector>
using namespace std;
void f(int n){
if (n == 0)return;
if (n == 1){
    cout<<n;
    return ;
}
cout<<n<<" ";
f(n-1);

}
int main (){
int n;
cin>>n;
f(n);
    return 0;
}