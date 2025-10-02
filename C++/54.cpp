#include<iostream>
using namespace std;
int main ()
{
    int arr[]={20,60,30,40,37,110};
    int i,j,k;
    int count=0,target_sum=110;
    int size=6;
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)
        {
            for (k=j+1;k<size;k++)
            {
                if (arr[i]+arr[j]+arr[k]==target_sum)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;

}

