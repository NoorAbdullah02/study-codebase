//prime numbers 1 to n
#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 for (int i=2;i<=n;i++){
    bool flag = true;
    for (int j = 2 ;j<i ; j++){
        if (i%j == 0) {
            flag = false;
            break;
            }
    }
    if (flag){
    cout<<i<<" ";
    }
 }
return 0;
}