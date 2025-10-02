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
            
    int count = 0 ;
    int max = INT_MAX; 
     for (int i=0;i<n;i++){
        if (max<v[i+1]){
            count++;
        }
     }
     cout<<count;
    
    return 0;
}