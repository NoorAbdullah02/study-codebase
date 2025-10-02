#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n;
 cin>>n;
  int count = 0;
 while(n--){
 vector<int> v(3);
 for (int i = 0;i<3;i++){
    cin>>v[i];
 }
 for (int i=0;i<3;i++){
    if ((v[i] == 1 && v[i+1] == 1)){count++;
    break;}
 }
 }
 cout<<count<<endl;
return 0;
}