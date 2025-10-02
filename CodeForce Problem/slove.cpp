#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int arr[] = {1,2,3,4};
 vector<int> v;
 int n = sizeof(arr)/sizeof(arr[0]);
 //cout<<n<<endl;
for(int x = 0;x<n;x++){
    int multi = 1;
    for (int i=0;i<n;i++){
         if (x == i)continue;
         //cout<<"Multi is  :"<<multi<<endl;
         multi *= arr[i]; 
    }
    v.push_back(multi);
    //cout<<x<<endl;
}
for(auto x : v){
    cout<<x<<" ";
}
return 0;
}