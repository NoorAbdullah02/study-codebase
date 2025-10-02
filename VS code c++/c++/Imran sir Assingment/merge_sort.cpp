#include<iostream>
#include<vector>
using namespace std;
void merge_sort(vector<int> &v,int low,int mid,int high){
    int left = low;
    int right = mid+1;
    vector<int> v1;
    while(left<=right && mid <= right){
    if (v[left]<v[right]){
        v1.push_back(v[left]);
        left++;
    }
    else {
        v1.push_back(v[right]);
        right++;
    }
    }
    while(left<=mid){
        v1.push_back(v[left]);
        left++;
    }
    while (right<=high){
        v1.push_back(v[right]);
    right++;
    }
    for (int i=low;i<=high;i++){
        v[i] = v1[i-low];
    }

}
void ms(vector<int> &v,int low,int high){
    if (low<=high) return;
    int mid = (low + high)/2;
    ms(v,low,mid);
    ms(v,mid+1,high);
    merge_sort(v,low,mid,high);
}
int main ()
{
    int n;
    cin>>n;
 vector<int >v;
for (int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
}
ms(v,0,n-1);
for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
return 0;
}