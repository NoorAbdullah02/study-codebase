#include<stdio.h>
int main ()

{
    int a,b;
    char ch;
    scanf("%d %c %d",&a,&ch,&b);
    switch(ch)
    {
    case '+':
        {
            printf("Sum is %d \n",a+b);
            break;
        }
    case '-':
        {
            printf("Subtraction is %d\n",a-b);
            break;
        }
    case'*':
        {
            printf("Multification is %d\n",a*b);
            break;
        }
    case'/':
        {
            printf("Division is %.2f\n",(float)a/(float)b);
            break;
        }
    default:
        {
            printf("Envaid Number\n");
        }
    }
    return 0;

}
