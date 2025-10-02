//4. Input second and calculate hour minite and second??
#include<stdio.h>
int main (){
    long long int h,m,s,n;
   printf("Input Second :");
scanf("%lld",&n);
h=n/3600;
n=n%3600;
m=n/60;
s=n%60;
printf("%lld Hour: %lld Minit: %lld Second",h,m,s);
return 0;
}
