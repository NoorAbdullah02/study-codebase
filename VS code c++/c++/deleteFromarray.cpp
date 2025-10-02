#include<iostream>
using namespace std;
int main ()
{
    int arr[10] = {1,2,3,6,5,59,5};
    int n = 7;
    int index = 3;
    for (int i=n;i>index;i--){
        arr[i] = arr[i-1];
    }
    for (int i: arr){
        cout<<i<<" ";
    }
    return 0;
}