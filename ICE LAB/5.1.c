#include<stdio.h>
int main (){
int i,n;
int sum=0;
printf("Enter the value\n");
scanf("%d",&n);
for (i=1;i<=n;i++){
    sum=sum+i;
    //printf("Value of i is = %d value of sum is %d\n",i,sum);
}
printf("The sum is = %d\n",sum);
return 0;
}
