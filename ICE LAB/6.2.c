//With RerturnType
#include<stdio.h>
void imu(int x,int y,int z){
int sum=x+y+z;
printf("Sum is %d",sum);
}
int main (){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
imu(a,b,c);
return 0;
}
