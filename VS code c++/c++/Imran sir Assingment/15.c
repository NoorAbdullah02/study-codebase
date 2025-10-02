#include<stdio.h>
int main (){
    int a = 20, b = 95;
    printf("Before Swapping\n");
    printf("A = %d\tB = %d\n",a,b);
    b = a+b;
    a = b-a;
    b = b-a;
    printf("After Swapping\n");
    printf("A = %d\tB = %d\n",a,b);
    return 0;

}