//7.Pattern print??
#include<stdio.h>

int main (){
long long int i,j,num;
scanf("%lld",&num);
for (i=1;i<=num;i++){
    for (j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}

