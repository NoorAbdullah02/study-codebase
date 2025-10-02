#include<stdio.h>
int main ()

{
    int y;
    scanf("%d",&y);
  int h,m,s;
  h=y/3600;
  y=y%3600;
  m=y/60;
  s=y%60;
  printf("%d %d %d ",h,m,s);

    return 0;

}
