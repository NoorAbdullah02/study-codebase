#include<iostream>
using namespace std;
int f(int x){
    //static int i = 0;
    if(x==0) {
        return 0;}
        //i++;
    return f(x-1)+x;
}
int main ()
{
   int ans =  f(5);
   cout<<ans<<endl;
    return 0;
}