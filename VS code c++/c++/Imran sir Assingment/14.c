#include<stdio.h>
int main (){
    int a = 10 , b= 20;
    printf("Before Swapping\n");
    printf("A = %d\tB = %d\n",a,b);
    int temp = a;
    a=b;
    b=temp;
    printf("After Swapping\n");
    printf("A = %d\tB = %d\n",a,b);
    return 0;
}