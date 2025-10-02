//1.Find the largest element of 5 float numbers  ??
#include<stdio.h>
int main (){
float a,b,c,d;
printf("Enter Five Float Number\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
if (a>b&&a>c&&a>d){
    printf("%.2f is the largest\Number\n",a);
}else if (b>a&&b>c&&b>d){
    printf("%.2f is the largest Number\n",b);
}else if (c>d&&c>a&&c>b){
    printf("%.2f is the largest Number\n",c);
}else {
printf("%.2f is the largest Number\n",d);
}


return 0;
}
