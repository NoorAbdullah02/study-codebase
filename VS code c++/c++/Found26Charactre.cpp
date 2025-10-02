#include<iostream>
#include<unordered_set>
using namespace std;
int main ()
{
 unordered_set <int> s1;
 s1.insert(5);
  s1.insert(9);
 s1.insert(7);
for (auto value : s1){
   cout<<value<<" ";
}

    return 0;
}