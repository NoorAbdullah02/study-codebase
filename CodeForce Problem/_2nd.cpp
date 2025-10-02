#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
    int minele = *min_element(v.begin(),v.end());
    int maxele = *max_element(v.begin(),v.end());
    int result = maxele - minele;
    if(result > 0){
        result = min(result , ((maxele-minele)/2));
    }
    cout<<result<<endl;

 }
return 0;
}