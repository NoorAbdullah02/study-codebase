#include<iostream>
#include<vector>
using namespace std;
int f(string &s){
    int bal = 0;
    int move = 0;
for (char ch : s){
  if (ch == '(')bal++;
  else {
    if (bal == 0)move++;
  else {
    bal--;
  }
  }
}
return move;
}
int main ()
{
int t;
cin>>t;
vector<int> results;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    string s;
    cin>>s;
    results.push_back(f(s));
}
for (int i:results){
    cout<<i<<endl;
}
return 0;
}