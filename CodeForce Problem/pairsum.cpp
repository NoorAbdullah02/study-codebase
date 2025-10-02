#include<bits/stdc++.h>
using namespace std;
int main ()
{
 vector<int> v = {1,2,3,4,5};
 vector<int> v1;
 int target = 7;

    int p = 0 , q = v.size()-1;
    while(p < q){
      int sum = v[p] + v[q];
      if (sum > target){
        q--;
      }
      else if (sum == target){
        v1.push_back(p);
        v1.push_back(q);
        break;
      }
      else if (sum < target){
        p++;
      }
    }
 
 cout<<v1[0]<<" "<<v1[1]<<endl;
return 0;
}