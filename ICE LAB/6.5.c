// write an user-defined function to find the squre,cube,5th power and nth power
#include<stdio.h>
#include<math.h>
void imu(int x,int n){

    int squre=pow(x,2);

    int cube = pow(x,3);

    int squre5= pow(x,5);

    int nth= pow(x,n);
    printf("Squre is %d\n",squre);
    printf("Cube is %d\n",cube);
    printf("Power 5 is %d\n",squre5);
    printf("Power Nth is %d\n",nth);
}
int main (){
int x,y;
printf("Enter x & n\n");
scanf("%d %d",&x,&y);
imu(x,y);
return 0;
}
