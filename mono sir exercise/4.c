#include<stdio.h>
int main (){
int i,n,sum=0,sum1=0;
scanf("%d",&n);
for (i=1;i<=n;i=i+2){
    sum=sum+i;
}
printf("The odd sum is = %d\n",sum);
for (i=2;i<=n;i=i+2){
    sum1=sum1+i;
}
printf("The Even sum is = %d\n",sum1);


return 0;
}



