#include<bits/stdc++.h>
using namespace std;
bool f(vector<int> &v,int low ,int high,int key){
    while(low<=high){
        int mid = (low+high)/2;
        if (v[mid] == key) return true;
    else if (key<v[mid]){
     high = mid-1;
    }
    else {
        low = mid + 1;
    }
    }
    return false;
}
int main ()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 sort(v.begin(),v.end());
 while (m--){
    int key;
    cin>>key;
    int ans = f(v,0,v.size()-1,key);
    if (ans)cout<<"found"<<endl;
    else {
        cout<<"not found"<<endl;
    }
     }
return 0;
}