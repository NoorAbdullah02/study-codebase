#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> Fprime(int n){
    vector<int> v;
    for (int i=2;i<=n;i++){
        bool check = true;
        for (int j=2;j<=sqrt(i);j++){
            if (i % j  == 0){check = false;break;}
        }if (check)v.push_back(i);
    }return v;
}
int main(){
    int n;
    cin>>n;
    vector<int> v = Fprime(n);
    for (auto it : v){
        cout<<it<<" ";
    }
    return 0;
}