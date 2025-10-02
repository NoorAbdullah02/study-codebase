#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int n=v.size();
    for (int i = n-1;i>=0;i--){
       int j=0;
       bool flag=false;
       while(v[i]!=v[j]){
        if(v[j]==0&&v[j+1]!=0){
          swap(v[j],v[j+1]);
          flag = true;
        }
          j++;
       }
       if (!flag){
        break;
       }
    }
}
int main (){
     int n;
 cin>>n;
 vector<int>v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
sort(v);
for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
    return 0;

}