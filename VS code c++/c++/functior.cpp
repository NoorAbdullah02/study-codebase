#include<functional>
#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    int arr[] = {2,1,6,5,4};
    //sort(arr,arr+5);
    sort(arr,arr+5,greater<int>());
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    


    return 0;
}