#include<iostream>
#include<vector>
#include<climits>
//#include<algorithm>
using namespace std;
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
            
    int max1 = INT_MIN ;
     for (int i=0;i<n;i++){
        max1 = max(v[i],max1);
         cout<<max1<<" ";
     }
    
    return 0;
}