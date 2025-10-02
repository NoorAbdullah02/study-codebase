#include<stdio.h>
int main ()
{
    int n1=0,n2=1,next_term;
    int n;
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    for (int i=3;i<=n;i++)
    {
        next_term=n1+n2;
        n1=n2;
        n2=next_term;
        printf("%d ",next_term);

    }
    return 0;

}
