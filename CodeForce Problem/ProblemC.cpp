#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 for (int i=0;i<n;i++){
    int n1;
    cin>>n1;
    vector<int> v(n1);
    for (int i = 0;i<n1;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int sum = 0, max1 = INT_MIN,count = 0;
    for (int i=0;i<n1;i++){
        max1 = max(v[i],max1);
        sum += v[i];
         if (max1-sum == sum){
        count++;
    }
    }
   
    cout<<count<<endl;

 }
return 0;
}