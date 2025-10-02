#include<iostream>
using namespace std;
int main ()
{
 pair<int,string> p;
 p = make_pair(10,"Noor");
 cout<<p.first<<" "<<p.second<<endl;
 pair<int,float> p1(10,25.26);
 cout<<p1.first<<" "<<p1.second<<endl;
auto p = make_pair(10,20);
cout<<p.first<<" "<<p.second<<endl;
 return 0;
}