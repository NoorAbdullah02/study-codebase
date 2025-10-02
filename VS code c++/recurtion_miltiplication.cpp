#include<iostream>
using namespace std;
void multiple(int num,int x){
    //base case
  if (x==0){
    return;
  }
  multiple(num,x-1);

  cout<<x*num<<" ";
}
int main ()
{
    int num,x;
    cin>>num>>x;
    multiple(num, x);

    return 0;

}