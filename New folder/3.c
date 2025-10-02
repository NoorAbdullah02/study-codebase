#include<stdio.h>
int main ()
{
    int n,i,cheak=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if(arr[i]==5){
            cheak=1;
        }

    }
       if(cheak==1){
            printf("Number is Found\n");
        }
        else{
            printf("Not Found\n");
        }
    return 0;

}
