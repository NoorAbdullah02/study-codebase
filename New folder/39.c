#include<stdio.h>
void imu(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main ()
{
    int a=10,b=20;
    printf ("Before Swap %d %d\n",a,b);
    imu(&a,&b);
    printf ("After Swap %d %d\n",a,b);

    return 0;

}
