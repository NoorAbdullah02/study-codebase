//bubble short algoritham//
//Sorted Array Problem
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for (int i=0;i<n-1;i++){
        bool flag = false;
    for (int j=0;j<n-1-i;j++){
        if (v[j]>v[j+1]){
            flag = true;
            swap(v[j],v[j+1]);
        }
        if (!flag)break;   //if (!flag)break; use for less complexity
                          //if the array is in a worst case then do not need to use the 
                          //bool flag function , because then use the same complexity 
    }
    }
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

return 0;

}