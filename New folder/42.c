#include<stdio.h>
int main ()

{
    int t1=0,t2=1;
    int next_term=0,n;
    scanf("%d",&n);
   printf("%d %d ",t1,t2);
    for(int i=3;i<=n;i++){
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        printf("%d ",next_term);
    }
    return 0;

}
