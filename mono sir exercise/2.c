#include<stdio.h>
int main (){
int i,n,sum=0;
scanf("%d",&n);
for (i=3;i<=n;i=i+2){
    sum=sum+i;
}
printf("The sum is = %d",sum);


return 0;
}

