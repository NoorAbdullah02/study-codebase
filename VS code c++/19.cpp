#include<bits/stdc++.h>//MAximum Header file in one header file
using namespace std;
void Selection_sort(vector<int>&V){
    int n=V.size();
 int min=V[0];
 for (int i = 0;i<n;i++){
    if (V[i]<min){
        min=i;
    }
 }
 for (int i=1;i<n;i++){
    if (i!=min){
        swap(V[i],V[min]);
    }
 }
}
int main ()
{
    int n;
    cin>>n;
vector<int> v(n);
for (int i=0;i<n;i++){
    cin>>v[i];
}
Selection_sort(v);;
for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
} 
return 0;
}