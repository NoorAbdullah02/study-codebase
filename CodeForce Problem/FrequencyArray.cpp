#include<bits/stdc++.h>
using namespace std;
// int maxele(vector<int>&v){
//     int max1 = INT_MIN;
//     for (int i=0;i<v.size();i++){
//         max1 = max(v[i],max1);
//     }
//     return max1;
// }
void f(vector<int> &v,int n){
    //int large = maxele(v);
    vector<int> freq(n+1,0);
    for (int i=0;i<v.size();i++){
        freq[v[i]]++;
    }
    for (int i=1;i<freq.size();i++){
        cout<<freq[i]<<endl;
    }

}
int main ()
{
    int n,m;
    cin>>n>>m;
 vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 f(v,m);

return 0;
}