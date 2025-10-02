#include<stdio.h>
void imu(int num){
if (num<=100&&num>=80){
    printf("A+");
}
    else if (num<=79&&num>=70){
        printf("A");
    }else if(num>=60&&num<=69){
    printf("A-");
    }
    else if(num>=50&&num<=59){
    printf("B");
    }
    else if(num>=40&&num<=49){
    printf("C");
    }
    else if(num>=32&&num<=39){
    printf("D");
    }
    else{
        printf("F");
    }
}
int main (){
    int num;
    scanf("%d",&num);
    imu(num);
return 0;
}
