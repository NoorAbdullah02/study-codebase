//Inserting_Sort Algoritham//
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void Inserting_sort(vector<int> &v){
int n=v.size();
for (int i=1;i<n;i++){
  int Current_Ele = v[i];
  int j = i-1;
  while(j>=0&&v[j]>Current_Ele){
    v[j+1]=v[j];
    j--;
  }
  v[j+1]=Current_Ele;
}
}
int main ()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
Inserting_sort(v);
for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
getch ();
}