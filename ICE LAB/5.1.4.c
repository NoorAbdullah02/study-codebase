#include<stdio.h>
int main (){
int n,sum=0;
scanf("%d",&n);
int arr[100];
int y=n*n;
for (int i=1;i<=y;i++){
       //arr[i];
    sum=sum+arr[i];
}
printf("The Sum is = %d",sum);


return 0;
}
