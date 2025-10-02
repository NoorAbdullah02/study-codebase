#include<bits/stdc++.h>
using namespace std;
void slove(){
    int n;
    cin>>n;
    int f1 = 0;
    vector<int> v(n+2,0);
    for (int i=1;i<=n;i++){
        int x;
        cin>>x;
        if (i == 1){
           v[x] = 1;
           continue;
        }
        if(v[x-1] || v[x+1] == 1){
            v[x] = 1;
        }
        else {
            f1 = 1;
        }
    }
    if (f1 == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int main (){
    int n;
    cin>>n;
    while (n--){
        slove();
    }
    return 0;
}