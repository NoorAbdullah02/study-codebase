#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void MAX_MIN(vector<int> v){
int max1 = INT_MIN;
int small = INT_MAX;
for (int i=0;i<v.size();i++){
    max1 = max(max1,v[i]);
    small = min(small,v[i]);
}
cout<<small<<" "<<max1<<endl;
}
int main (){
    int n;
    cin>>n;
    vector <int > v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    MAX_MIN(v);
    return 0;
}