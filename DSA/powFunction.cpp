#include<iostream>
using namespace std;
// int f(int x,int y){
//     if (y == 0) return 1;
//     return f(x,y-1)*x;
// }
int f(int x,int y){
    if (y == 0) return 1;
    if (y%2 == 0){
     return f(x*x,y/2);
    }
    else{
        return x*f(x*x,(y-1)/2);
    }
}
int main(){
    int ans = f(2,9);
    cout<<ans<<endl;

return 0;
}