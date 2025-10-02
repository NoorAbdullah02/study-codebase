#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main ()
{
    int n;
    
    cin>>n;
    while(n--){
        int n1;
        cin>>n1;
vector<int> v(n1);
for (int i=0;i<n1;i++){
    cin>>v[i];
}
int sum = 0,max1 = INT_MIN,count=0;
for (int i=0;i<n1;i++){
    sum = sum + v[i];
    max1 = max(max1,v[i]);
    if(sum-max1 == max1){
        count++;
    }
}
    cout<<count<<endl;
    }
    return 0;
}