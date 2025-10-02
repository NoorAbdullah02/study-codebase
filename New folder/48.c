#include<stdio.h>
int main()
{
    int num=10;
    int *ptr;
    ptr=&num;
    int **ptr1;
    ptr1=&ptr;
    printf("%d",ptr);
}
