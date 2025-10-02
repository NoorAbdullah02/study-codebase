#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int binary_search(vector<int>&input,int target){
int low=0;
int hi=input.size()-1;
while(low<=hi){
    int mid=low+(hi-low)/2;//midified mid to trackel overflow 
    if (input[mid]==target){
        return input[mid];
    }
    else if (input[mid]>target) {
        
           hi = mid-1;
    }
        else{
         low = mid+1;
        }
    }
    return -1;
}


int main ()
{
    int n;
    cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
 }
 int target=20;
 cout<<binary_search(v,target);
getch ();
}