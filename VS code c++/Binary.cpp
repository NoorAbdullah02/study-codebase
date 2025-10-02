#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int binary_search_rotated(vector<int>&input,int target){
    int lo=0,hi=input.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
    if (input[mid]==target)return mid;
    if (input[mid]>=input[lo]){
        if (target>=input[lo]&&target<=input[mid]){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    else{
        if(target>=input[mid]&&target<=input[hi]){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    }
    return -1;

}
int main ()
{
       int n;
    cin>>n;
    vector <int>v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
   int target=3;
   cout<<binary_search_rotated(v,target);
getch ();
}