#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,n;
    cin>>m>>n;
    vector<int> v(m);
    vector<int> v1(n);
    for (int i=0;i<m;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    char ch;
    cin>>ch;
    for (int i=0;i<m;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    if (v.size()+1 == ch)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
return 0;
}