#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
bool Luckyarray(int arr[],int n){
int count = 0;
int min_ele = INT_MAX;
for (int i=0;i<n;i++){
 min_ele = min(min_ele,arr[i]);
if (arr[i] == 5){
    count++;
}
}
if ((min_ele%2!=0 && min_ele == 5) && count == 1){
    return true;
}
else{
    return false;
}
}
int main ()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 int ans = Luckyarray(arr,n);
 if (ans == 1){
    cout<<"Lucky"<<endl;
 }
 else{
    cout<<"Unlucky"<<endl;
 }
return 0;
}