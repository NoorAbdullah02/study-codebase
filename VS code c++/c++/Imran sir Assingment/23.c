#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter three Numbers\n");
    scanf("%d",&a);
    int fnum = a/100;
    int lnum = a%10;
    int sum = fnum+lnum;
    printf("1st and last Number sum is = %d",sum);
}