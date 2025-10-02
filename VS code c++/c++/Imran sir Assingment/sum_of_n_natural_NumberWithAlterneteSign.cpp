#include<iostream>
using namespace std;
int f(int num){
    if (num == 0) return 0;
    return f(num-1) + ((num%2 == 0)? (-num) : (num));
}
int main ()
{
   int ans = f(5);
   cout<<ans<<endl;
    return 0;
}