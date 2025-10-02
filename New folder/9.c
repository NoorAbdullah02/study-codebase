// student id and there marks
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
int id[n],mark[n];
printf("Enter ID:\n");
for (int i=0;i<n;i++){
    scanf("%d",&id[i]);
}
printf("Enter Mark:\n");
for (int i=0;i<n;i++){
    scanf("%d",&mark[i]);
}
for (int i=0;i<n;i++){
    printf("Id is : %d \n Mark is : %d\n",id[i],mark[i]);
}
return 0;
}
