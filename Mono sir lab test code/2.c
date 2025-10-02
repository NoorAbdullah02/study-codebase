//2.Find Sum of pow(1,2)+pow(2,2)......??
#include<stdio.h>
int main (){
int i,n,sum=0;
scanf("%d",&n);
for (i=1;i<=n;i++){
    sum=sum+(i*i);
}
printf("Sum is = %d",sum);
return 0;
}
