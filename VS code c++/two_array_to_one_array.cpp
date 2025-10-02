#include <iostream>
using namespace std;
class A
{
public:
    void set()
    {
        long long int n;
        cin >> n;
       long long  int arr[n];
        long long int arr1[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (long long int j = 0; j < n; j++)
        {
            cin >> arr1[j];
        }
        long long int m = n + n;
        long long int new_arr[m];
        long long int i = 0, j = 0, k = 0;
        while (i < n && j < n)
        {
            if (arr[i] > arr[j])
            {
                new_arr[k++] = arr[i++];
            }
            else
            {
                new_arr[k++] = arr1[j++];
            }
        }
        while(i<n){
            new_arr[k++] = arr[i++];
        }
        while(j<n){
            new_arr[k++] = arr1[j++];
        }
        for (int i=0;i<m;i++){
            cout<<new_arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    A a;
    a.set();
    return 0;
}