#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int y,m,d;
    y=n/365;
    n=n%365;
    m=m/60;
    d=n%60;
    printf("%d %d %d",y,m,d)

return 0;
}
