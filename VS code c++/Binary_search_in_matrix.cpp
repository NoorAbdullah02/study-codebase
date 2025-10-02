#include<iostream>
#include<vector>
using namespace std;
bool search_matrix(vector<vector<int>>&v,int target){
int n = v.size();
int m=v[0].size();
int lo=0,hi=n*m-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    int x = mid/m;
    int y = mid%m;
    if(v[x][y]==target){
        return true;
    }
    else if(v[x][y]<target){
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }
}
return false;
}
int main (){
    vector<vector<int>> a={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 100;
    cout<<search_matrix(a,target);
    return 0;

}