#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,6,7,1};
    int target_sum=7 ;
    int i,j,count=0;
    int size=5;
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)
        {
            if (arr[i]+arr[j]==target_sum)
            {
                count++;
            }
        }
    }

    cout<<count<<endl;
    return 0;

}
