#include<stdio.h>
#include<math.h>
int main (){
    int a,b;
    printf("Enter A & B\n");
    scanf("%d %d",&a,&b);
    int x = pow(a,2)+2*a*b+pow(b,2);
    printf("Value of X is : %d\n",x);
        return 0;
}