#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int findmax(vector<int> &v){
    int maxele = INT_MIN;
    for (int i=0;i<v.size();i++){
     maxele = max(v[i],maxele);
    }
    return maxele;
}
void f(vector<int> &v){
    vector<int> freq(5,0);
    for (int i=0;i<v.size();i++){
       freq[v[i]]++;
    }
    int x = findmax(freq);
    if (x > v.size()/2){
        cout<<x<<endl;
    }
}
int main ()
{
 vector<int> v = {1,2,3,4,1,1,1};
 f(v);
return 0;
}