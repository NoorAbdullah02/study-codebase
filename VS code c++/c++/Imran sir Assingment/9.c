#include<stdio.h>
int main ()
{
    float calcius;
    printf("Enter Calcius\n");
    scanf("%f",&calcius);
    float far = (calcius*9/5.0)+32;
    printf("Farenhite is : %.2f\n",far);
    return 0;
}