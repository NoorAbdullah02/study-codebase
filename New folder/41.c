#include<stdio.h>
int main (){
    int i,j;
    char str[20];
    printf("Enter A Name:\n");
    gets(str);
    int l=strlen(str);
    for (i=0;i<l;i++){
        for (j=0;j<=i;j++){
            printf("%c",str[j]);

        }
        printf("\n");
    }
return 0;
}
