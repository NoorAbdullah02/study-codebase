#include<stdio.h>
#include<math.h>
int main (){
    int a,b;
    printf("Enter A & B\n");
    scanf("%d %d",&a,&b);
    int x = 5*pow(a,2)+8*a*b;
    printf("Value of X is : %d\n",x);
        return 0;
}