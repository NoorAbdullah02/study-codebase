#include<iostream>
#include<vector>
using namespace std;
int main ()
{
//  vector<pair<int,string>> v= {{1,"noor"},{2,"nur"}};
//  for (int i=0;i<v.size();i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
//  }
//  v.push_back({50,"Adu"});
//  for (int i=0;i<v.size();i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
//  }
// vector<pair<int, string>> p(5);
// for (int i=0;i<3;i++){
//     cout<<"Enter Integer : "<<endl;
// cin>>p[i].first;
//     cout<<"Enter String : "<<endl;
// cin>>p[i].second;
// }
// p.erase(p.begin()+1);
// for (int i=0;i<3;i++){
//     cout<<p[i].first<<" "<<p[i].second<<endl;
// }
int n;
cin>>n;
vector<pair<int,int>> p(n);
for (int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
}
int sum = 0;
// for(int i=0;i<n;i++){
//     sum += p[i].second;
// }
for (auto i:p){
    sum += i.second;
}
cout<<sum<<endl;
return 0;
}