#include<stdio.h>
int main (){
    float base,hight;
    printf("Enter Base\n");
    scanf("%f",&base);
    printf("Enter Hight\n");
    scanf("%f",&hight);
    float tri = 0.5*base*hight;
    printf("Area Of a Triangle is : %.2f",tri);
    return 0;
}