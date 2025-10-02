#include<iostream>
#include<climits>
using namespace std;
int main ()
{
 int arr[] = {1,2,3};
 int n = 3;
 int sum = 0;
 int large = INT_MIN;
 for (int i=0;i<n;i++){
    sum += arr[i];
    large = max(sum,large);
    if(sum<0){
        sum = 0;
    }
 }
 cout<<large<<endl;
return 0;
}