#include<iostream>
#include<vector>
using namespace std;
void Selection_sort(vector<int>&V){
    int n=V.size();
for (int i=0;i<n;i++){
    int min=i;
    for (int j=i+1;j<n;j++){
        if (V[j]<V[min]){
            min=j;
        }
    }
   if (V[i]!=min){
    swap(V[i],V[min]);
   }
}
}

int main (){
    int n;
    cin>>n;
    vector< int > V(n);
    for (int i=0;i<n;i++){
        cin>>V[i];
    }
    Selection_sort(V);
    for (int i=0;i<n;i++){
        cout<<V[i]<<" ";
    }
    
    return 0;
    
}