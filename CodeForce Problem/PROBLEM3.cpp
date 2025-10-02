#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        int small = INT_MAX;
        int small_index = INT_MAX;;
        for (int i=0;i<n;i++){
            
            if (arr[i]<small) {
                small = arr[i];
                 small_index = i+1;
            }
        }
        cout<<small<<" "<<small_index<<endl;
        return 0;
}