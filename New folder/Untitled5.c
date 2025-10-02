//1 squre 2 squre 3 squre
#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+i*i;
    }
    printf("%d",sum);
return 0;
}
