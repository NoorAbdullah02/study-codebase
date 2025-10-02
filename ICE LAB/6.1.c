//With Rerturn Type
#include<stdio.h>
int imu(int x,int y,int z){
int Sum=x+y+z;
return Sum;
}
int main (){
int a,b,c;
printf("Enter Three Numbers\n");
scanf("%d%d%d",&a,&b,&c);
int sum1=imu(a,b,c);
printf("Sum is %d",sum1);

return 0;
}
