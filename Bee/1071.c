#include<stdio.h>
int main (){
int x,y,sum=0;
scanf("%d%d",&x,&y);
for (int i=x;i<=y;i=i-2){
    sum=sum+i;
}
printf("%d\n",sum);

return 0;
}
