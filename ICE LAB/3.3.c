#include<stdio.h>
int main (){
int a,b,c;
printf("A,B,C\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c){
    printf("The Largest Number is %d\n",a);
}
else if (b>a && b>c){
        printf("The Largest Number is %d\n",b);
}
else {
        printf("The Largest Number is %d\n",c);
}

return 0;
}
