#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxele(vector<int> &v){
    int max1 = INT_MIN;
    for (int i= 0;i<v.size();i++){
        max1 = max(max1,v[i]);
    }
    return max1;
}
int minele(vector<int> &v){
    int max1 = INT_MAX;
    for (int i= 0;i<v.size();i++){
        max1 = min(max1,v[i]);
    }
    return max1;
}
void print (vector<int> &v,int n){
int MAx = maxele(v);
int min = minele(v);
vector<int>arr(MAx+1,0);
for (int i=0;i<n;i++){
    arr[v[i]]++;
}
if (arr[min] % 2 != 0)cout<<"Lucky"<<endl;
else cout<<"Unlucky"<<endl;
}
int main ()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    print (v,n);
    return 0;
}