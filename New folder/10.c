#include<stdio.h>
int imu(int x,int y,int z){
int sum=x+y+z;
//sum of 3 number in user defined function
return sum;
}
int main (){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int im1=maijul(x,y,z);
    printf("Sum is %d",im1);
    return 0;
}
