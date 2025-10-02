#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main ()
{
 int arr2[]={55,16,5,6,6,42,6,2,1,6,5,5,1,5};
 sort(arr2,arr2+14);
 sort(arr2,arr2+14,greater<int>());
for (int i=0;i<14;i++){
    cout<<arr2[i]<< " ";
}
return 0;
}