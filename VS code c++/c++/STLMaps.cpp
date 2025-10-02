#include<iostream>
#include<map>
using namespace std;
 int main ()
 {
  map<string,int> m;
  for (int i=0;i<1;i++){
    string n;
    int j;
    cin>>n>>j;
m.insert(make_pair(n,j));
  }
  for (auto ele: m ){
    cout<<ele.first<<endl<<ele.second<<endl;
  }
    return 0;
 } 