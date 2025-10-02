#include<iostream>
using namespace std;
int f(int n,int r){
    if (r == 0 || r == n){
        return 1;
    }
    return f(n-1,r-1) + f(n-1,r);
}
int main (){
for (int i=0;i<5;i++){
    for (int j=0;j<5-i;j++){
        cout<<" ";
    }
    for (int j =0;j<=i;j++){
        cout<<f(i,j)<< " ";
    }
    cout<<endl;
}
    return 0;
}