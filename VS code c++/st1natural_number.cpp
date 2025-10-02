#include<iostream>
using namespace std;
void nature(int x)
{
    if (x<1){
  return ;
    }
     nature(x-1);
     cout<<x<<" ";
}
int main ()
{
    int x;
    cin>>x;
nature(x);
    return 0;

}