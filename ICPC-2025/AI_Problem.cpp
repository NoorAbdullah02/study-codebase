#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a,b,c;cin>>a>>b>>c;
    vector<int> v = {a,b,c};
    sort(v.begin(),v.end());


    int mx = max({a,b,c});
    int mn = min({a,b,c});


    if ((mx-mn) >= 10)cout<<"check again"<<endl;
    else {
        cout<<"final" <<" "<<v[1]<<endl;
    }
    return 0;
}