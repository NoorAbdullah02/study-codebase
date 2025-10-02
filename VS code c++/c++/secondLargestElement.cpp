#include<bits/stdc++.h>
using namespace std;
    int imu(vector<int>& nums) {
        set<int> s;
        for (int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
   
int main ()
{
    int n;
    cin>>n;
vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 cout<<imu(v);
return 0;
}