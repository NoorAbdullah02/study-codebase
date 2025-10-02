#include<stdio.h>
int main(){
int a=10;
printf("%x\n",&a);
printf("%x\n",&a);
int *p;
p=&a;
printf("%x\n",&a);
printf("%d\n",*p);
return 0;
}
