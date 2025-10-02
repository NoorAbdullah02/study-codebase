#include<iostream>
#include<climits>
using namespace std;
int main ()
{
      int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr_max = 0;
    int max_sum =0 ;
    for (int i=0;i<n;i++){
        curr_max += arr[i];
        if (curr_max<0){
            curr_max = 0;
        }
     max_sum = max(curr_max,max_sum);
    }
    cout<<max_sum;
    return 0;
}  