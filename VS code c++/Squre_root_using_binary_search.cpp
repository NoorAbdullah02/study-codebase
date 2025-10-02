#include<iostream>
#include<conio.h>
using namespace std;
int squre_root(int x){
    int lo=1;
    int hi=x;
    int result = 0;
    while(lo<=hi){
       int mid=lo+(hi-lo)/2;
if (mid*mid<=x){
    result = mid;
    lo=mid+1;
}
else{
    hi=mid-1;
}
    }
    return result;
}
int main ()
{
 int x;
 cin>>x;
 cout<<squre_root(x);
getch ();
}