//3. Find the sum of 2+5+8+....n??
#include<stdio.h>
int main (){
int i,n,sum=0;
scanf("%d",&n);
for (i=2;i<=n;i=i+3){
    sum=sum+i;
}
printf("Sum is = %d",sum);
return 0;
}

