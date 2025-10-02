#include<stdio.h>
int main()
{
    int a = 10,*ptr;
    printf("\nValue of ptr : %u", ptr);
    printf("\nValue of ptr : %u", *ptr);
    ptr=&a;
    printf("\nValue of ptr : %u", &a);
    printf("\nValue of ptr : %u", ptr);
    printf("\nValue of ptr : %u\n", *ptr);
return 0;
}
