#include<iostream>
#include<list>
using namespace std;
void print(list<int> &s){
    list<int> :: iterator it;
    for (it = s.begin();it!=s.end();it++){
          cout<<*it<< " ";
    }
    cout<<endl;
}
void print1(list<int> &k){
    list<int> :: iterator it1;
    for (it1 = k.begin();it1!=k.end();it1++){
      cout<<*it1<<" ";
    }
    cout<<endl;
}
int main ()
{
    int n;
    cin>>n;
 list<int>l;
 list<int>k;
  for (int i = 0 ; i <n;i++){
    int a;
    cin>>a;
    l.push_back(a);
 }
 for (int i=0;i<n;i++){
    int a;
    cin>>a;
    k.push_back(a);
 }
 l.merge(k);
 print(l);
 print1(k);
 l.sort();
 print(l);
 l.reverse();
 print(l);
//  l.unique(2);
//  print(l);

return 0;
}