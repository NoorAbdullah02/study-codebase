#include<stdio.h>
int main (){
    float a,b,c;
    printf("Enter A\n");
    scanf("%f",&a);
    printf("Enter B\n");
    scanf("%f",&b);
    printf("Enter C\n");
    scanf("%f",&c);
    float avg = (a+b+c)/3.0;
    printf("Average is : %.2f\n",avg);
    return 0;

}