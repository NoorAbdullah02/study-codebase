#include<iostream>
#include<list>
using namespace std;
void print (list<int> &l){
    list<int> :: iterator it;
    for (it = l.begin();it!=l.end();it++ ){
        cout<<*it<<" ";
    }
    cout<<endl;
} 
int main ()
{
 int n;
 cin>>n;
 list<int>l;
 for (int i=0;i<n;i++){
    int a;
    cin>>a;
    l.push_back(a);
 }
  l.sort();
 print(l);
 l.reverse();
 print(l);


return 0;
}