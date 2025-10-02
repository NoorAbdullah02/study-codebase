#include<iostream>
#include<vector>
using namespace std;
bool slove (){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for (int i=1;i<n;i++){
        if(abs(v[i]-v[i-1]) != 5 && abs(v[i]-v[i-1]) != 7)return false;
    }
    return true;
}
int main (){
    int n;
    cin>>n;
    while (n--){
        cout<<(slove() ? "YES" : "NO")<<endl;;
    }
    return 0;
}