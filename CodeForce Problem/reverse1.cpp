#include<iostream>
#include<vector>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 vector<int> v;
 for (int i=0;i<n;i++){
    int num;
    cin>>num;
    v.clear();
    while (num!=0){
       v.push_back(num%10);
        num/=10;
    }
    for (int i=0;i<v.size();i++){
        if (i>=v.size()-1) cout<<v[i];
        else cout<<v[i]<<" ";
    }
    cout<<endl;
 }
return 0;
}