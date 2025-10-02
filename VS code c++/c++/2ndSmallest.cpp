#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main ()
{
 vector<int> v;
for (int i=0;i<5;i++){
    int a;
    cin>>a;
v.push_back(a);
}
set<int> S;
for (int val :v){
    S.insert(val);
}

set<int> :: iterator itr;
itr = S.begin();
itr++;
cout<<*itr;


 
return 0;
}