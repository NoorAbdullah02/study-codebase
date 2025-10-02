#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enetr integer Value\n");
    scanf("%d",&a);
    printf("Enetr Float Value\n");
    scanf("%f",&b);
    getchar();
    printf("Enetr Charter Value\n");
    scanf("%c",&c);
    printf("Integer Value is = %d\n",a);
    printf("Float Value is = %.2f\n",b);
    printf("Charter Value is = %c\n",c);

    return 0;
}