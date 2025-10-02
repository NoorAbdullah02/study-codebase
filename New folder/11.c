
#include<stdio.h>
int main (){
int *ptr;
int a=10;
ptr=&a;
printf("%x\n",&a);
printf("%x\n",*ptr);
printf("%x\n",ptr);
}
