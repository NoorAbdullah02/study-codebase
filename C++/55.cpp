#include<iostream>
using namespace std;
int main ()
{
    int arr[]={2,2,3,3,4,4,5,5,7,6,6};
    int i,j;
    int size=11;
    for (i=0;i<size;i++)
    {
      for (j=i+1;j<size;j++){

        if(arr[i]==arr[j])
        {
            arr[i]=arr[j]=-1;
        }
      }

    }
    for (i=0;i<size;i++){
        if (arr[i]>0)
        {
            cout<<arr[i]<<endl;
        }
    }

    return 0;

}
