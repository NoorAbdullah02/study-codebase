#include<iostream>
using namespace std;
void print(int n){
    if (n > 10) return ;
    print(n+1);
    cout<<n<<endl;
}
int main ()
{
    int num;
    print(1);
    return 0;
}