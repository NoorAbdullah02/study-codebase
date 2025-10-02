#include<stdio.h>
int main (){
int Id[7],i;
printf("Input Id\n");
for (i=0;i<7;i++){
    scanf("%d",&Id[i]);
}
printf("ID is\n");
for (i=0;i<7;i++){
    printf("%d\n",Id[i]);

}

return 0;
}
