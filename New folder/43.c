#include<stdio.h>
int main ()
{
    int a=10,*ptr;
   printf("%u\n",ptr);
       printf("%u\n",*ptr);
        ptr=&a;
    printf("%u\n",&a);
    printf("%u\n",ptr);
    printf("%u\n",*ptr);




    return 0;

}
