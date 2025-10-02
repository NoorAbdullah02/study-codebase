#include<bits/stdc++.h>
using namespace std;
void call(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> v1(n);
    int left = 0,right = n-1;

    for (int i=0;i<n;i++){
    if (i%2 == 0){
        v1[i] = v[right];
        right--;
    }
    else{
        v1[i] = v[left];
        left++;
    }
}
    for (int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }cout<<endl;
}
int main ()
{
 int n;
 cin>>n;
 while(n--){
    call();
 }
return 0;
}