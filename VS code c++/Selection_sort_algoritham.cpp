//Selection sort Algoritham// Sorting Array Problem
#include<bits/stdc++.h>//MAximum Header file in one header file//
using namespace std;
void Selection_sort(vector<int>&V){
    int n=V.size();
    for (int i=0;i<n-1;i++){
        int min_index=i;
        for (int j=i+1;j<n;j++){  //use i || j+i output is same 
            if (V[j]<V[min_index]){
             min_index=j;
            }
        }
        if (V[i]!=V[min_index]){
           swap(V[i],V[min_index]);
        }
    }
}
int main ()
{
    int n;
    cin>>n;
vector<int> v(n);
for (int i=0;i<n;i++){
    cin>>v[i];
}
Selection_sort(v);;
for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
} 
return 0;
}