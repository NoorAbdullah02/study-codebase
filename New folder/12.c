#include<stdio.h>
#include<math.h>
void imu(int x,int n){
int squre=pow(x,2);
int cube=pow(x,3);
int fifth=pow(x,5);
int nth=pow(x,n);
printf("Squre is %d\n",squre);
printf("Cube is %d\n",cube);
printf("Fifth is %d\n",fifth);
printf("nth is %d\n",nth);

}
int main (){
int x,y;
scanf("%d %d",&x,&y);
imu(x,y);
return 0;

}
