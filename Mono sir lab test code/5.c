//5.take an array size of n and find the smallest number of this array??
#include<stdio.h>
int main (){
    long long int n,i;
    scanf("%lld",&n);
long long int arr[n];
for (i=0;i<n;i++){
    scanf("%lld",&arr[i]);
}
long long int small=arr[0];
for (i=0;i<n;i++){
    if (arr[i]<small){
        small=arr[i];
    }
}
printf("The Smallest Number in the array is = %lld",small);


return 0;
}
