#include<iostream>
using namespace std;
int main(){

int arr[]={3,1,2,4,0,6};
int i,j,k;
int target_sum=6,count=0 ;
int size=6;
for (i=0;i<size;i++)
{
for (j=i+1;j<size;j++)
{
  for (k=j+1;k<size;k++)
  {
      if(arr[i]+arr[j]+arr[k]==target_sum)
      {
          count++;
      }
  }
}
}
cout<<count<<endl;

return 0;
}
