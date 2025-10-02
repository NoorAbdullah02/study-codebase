#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
vector<int> v;
vector<int> v1;
    while(a!=0){
        v.push_back(a%2);
        a /= 2;
    }
    while(b!=0){
        v1.push_back(b%2);
        b /= 2;
    }
    reverse(v.begin(),v.end());
    reverse(v1.begin(),v1.end());
    vector<int> Av,Ov,Xv;
    for (int i=0;i<max(v.size(),v1.size());i++){
        Av.push_back(v[i] & v1[i]);
        Ov.push_back(v[i] | v1[i]);
        Xv.push_back(v[i]^ v1[i]);
    }
    reverse(Av.begin(),Av.end());
    reverse(Ov.begin(),Ov.end());
    reverse(Xv.begin(),Xv.end());
    int SumA = 0, SumO = 0, SumX = 0;
    for (int i=0;i<Av.size();i++){
        if (Av[Av.size()-1-i] == 1){
            SumA += pow(2,i); 
        }
    }
    for (int i=0;i<Ov.size();i++){
        if (Ov[Ov.size()-1-i] == 1){
            SumO += pow(2,i); 
        }
    }
    for (int i=0;i<Av.size();i++){
        if (Xv[Xv.size()-1-i] == 1){
            SumX += pow(2,i); 
        }
    }
    cout<<SumA<<" "<<SumO<<" "<<SumX<<endl;
    return 0;
}