#include<stdio.h>
int main()
{
    float calcius;
    scanf("%f",&calcius);
    float faranhite=(9.0/5*calcius)+32;
    int kalvin=calcius+273;
    printf("Farenhite is %.2f\n",faranhite);
    printf("Kalvin is %d",kalvin);
    return 0;

}
