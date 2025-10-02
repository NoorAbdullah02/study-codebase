#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

void Selection_sort (vector<int>&v){
    int n=v.size();
    for (int i=1;i<n;i++){
        int current_ele = v[i];
        int j = i-1;
        while(j>=0&&v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current_ele;
    }
}
int main ()
{
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
    
getch ();
}