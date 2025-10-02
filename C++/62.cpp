#include<iostream>
using namespace std;
int imu(int arr[],int size)
{
    int index=0, max=arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    return index;
}
int main ()
{
    cout<<"Enter N"<<endl;
    int n;
    cin >>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int st_1max= imu(arr,n);
    int imran=arr[st_1max];
    for (int i=0;i<n;i++)
    {
        if (arr[i]==imran)
        {
            imran=-1;
        }
    }
    int nd2_max=imu(arr,n);
    cout<<arr[nd2_max]<<endl;

    return 0;

}
