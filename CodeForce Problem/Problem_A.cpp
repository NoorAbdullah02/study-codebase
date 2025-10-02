#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while(n--){
    int m;
    cin>>m;
    vector<int> v(m);
    v.clear();
    for (int i=0;i<m;i++){
     cin>>v[i];
    }
    int maxele = INT_MIN;
    int count = 0;
    for (int i=0;i<m;i++){
        if (v[i]>=maxele){
            maxele = v[i];
            count++;
        }
    }
    //cout<<maxele<<" "<<count<<endl;
    int x = maxele+count;
    cout<<x<<endl;
 }
return 0;
}