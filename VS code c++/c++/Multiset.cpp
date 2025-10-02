#include<iostream>
#include<set>
using namespace std;
int main ()
{
 multiset<int> m1;
 for(int i=0;i<5;i++){
    int a;
    cin>>a;
    m1.insert(a);
 }

 for (int value : m1){
    cout<<value<<" ";
 }
return 0;
}