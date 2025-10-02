#include<stdio.h>
int main (){
    int d;
    scanf("%d",&d);
    int year = d/365;
    d = d%365;
    int month = d/30;
    int days = d%30;
    printf("%d %d %d",year,month,days);

    return 0;
}