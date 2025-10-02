#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(vector<int> &v,int key){
int n = v.size();
int a = 0;
int b = n-1;
int mid = 0;
while(a<=b){
    mid = (a+b)/2;
    if (v[mid] == key){
        return mid;
    }
    else if(key<v[mid]){//10<15
        b = mid-1;
    }
    else{
        a = mid+1;
    }
}
return -1;
}
int main ()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<binary_search(v,10);
 
return 0;
}