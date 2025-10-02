#include<iostream>
using namespace std;
void f(int num,int &sum){
    if (num == 0) return ;
    int a = num %10;
    int b = num /10;
    sum += a;
    f(b,sum);
    cout<<a<<endl;

}
int main ()
{
    int num = 2048;
    int sum = 0;
    f(num,sum);
    cout<<sum<<endl;
    return 0;
} 