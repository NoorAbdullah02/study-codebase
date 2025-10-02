#include<iostream>
#include<vector>
using namespace std;
int mountain_array(vector<int>v){
    int lo=0;
    int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid = lo+(hi-lo/2);
        if (v[mid]>v[mid-1]){
         ans=mid;
         lo=mid+1
        }
        else{
            hi=mid-1;
        }
    }
    return ans;
}
int main (){
       int n;
    cin>>n;
    vector <int>v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
   int target=0;
   cout<<mountain_array(v); 

    return 0;

}
