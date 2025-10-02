#include<stdio.h>
int main (){
int i,n,m;
int sum=0;
printf("Enter the value of M\n");
scanf("%d",&m);
printf("Enter the value of N\n");
scanf("%d",&n);
for (i=m;i<=n;i++){
    sum=sum+i;
    //printf("Value of i is = %d value of sum is %d\n",i,sum);
}
printf("The sum is = %d\n",sum);
return 0;
}


