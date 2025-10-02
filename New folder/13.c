#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int h,m,s;
    h=n/3600;
    n=n%3600;
    m=n/60;
    s=n%60;
printf("%d hour %d minit %d second",h,m,s);
    return 0;

}
