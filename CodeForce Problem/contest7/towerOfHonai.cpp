#include <iostream>
#include<cmath>
using namespace std;
int print(int n,int a,int b, int c){
    if (n == 0)return 0;
    print(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    print(n-1,b,a,c);
}
int main() {
   int n;
   cin>>n;
   cout<<(1<<n)-1<<endl;
   print(n,1,2,3);

    return 0;
}