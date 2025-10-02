#include<stdio.h>
//1 cube 2 qube
int main ()
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum=sum+pow(i,3);
    }
    printf("%d",sum);
    return 0;

}
