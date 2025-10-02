#include <stdio.h>
#include <stdlib.h>
int main(){
    int km;
    printf("Enter kilometer\n");
    scanf("%d",&km);
    int m = km*1000;
    printf("Kilometer to metter conversion is : %d\n",m);
    return 0;
}