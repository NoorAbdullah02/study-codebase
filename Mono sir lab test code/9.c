//7.Pattern print??
#include<stdio.h>
void imu (){
long long int i,j,num;
scanf("%lld",&num);
for (i=1;i<=num;i++){
        for (j=1;j<=2*num-1;j++){
    if (j<=num+(i-1) && j>=num-(i-1)){
        printf("*");
    }
   else{
    printf(" ");
   }
        }
   printf("\n");
}
}
int main (){
imu ();
return 0;
}



