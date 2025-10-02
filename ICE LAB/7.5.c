#include<stdio.h>
int main (){
void *ptr;
char cnum='c';
int inum=12;
float fnum=10.00;
ptr=&cnum;
printf("\n Value of char ptr : %u",ptr);
printf("\n Value of char : %c\n",*(char*)ptr);
ptr=&inum;
printf("\nValue of int ptr : %u",ptr);
printf("\nValue of int : %d\n",*(int*)ptr);
ptr=&fnum;
printf("\nValue of float ptr : %u",ptr);
printf("\nValue of float : %f\n",*(float*)ptr);
return 0;
}
