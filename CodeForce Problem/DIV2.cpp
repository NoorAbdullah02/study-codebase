#include<bits/stdc++.h>
using namespace std;
int slove(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    int count = 0;
    //if(n == 1)return 0;
    int j =0;
    for (int i=0;i<n;i++){

        if (v[i] == v[j])count++; 
    }
    j++;
    int res = n - count ;
    return res;
}
int main ()
{
    int t;
    cin>>t;
    while (t--){
        cout<<slove()<<endl;
    }
    return 0;
}