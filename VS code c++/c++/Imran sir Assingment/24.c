#include<stdio.h>
#include<math.h>
int main (){
    int a;
    printf("Enter  Numbers\n");
    scanf("%d",&a);
      int rem = a%10;
      int fst = a/100;

    int sum1 = pow(rem,2);
        int sum2 = pow(fst,2);


    printf("1st Number Squre is %d\n",sum1);
        printf("Last Number Squre is %d\n",sum2);




}