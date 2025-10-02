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
    sum = 0;
    for (int j = i ;j<n;j++){
    sum += arr[j];
     large = max(sum,large); 
    }cout<<endl;
    
 }
 cout<<large<<endl;
return 0;
}