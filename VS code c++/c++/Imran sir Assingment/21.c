#include<stdio.h>
int main (){
    char ch;
    printf("Enter A Character\n");
    scanf("%c",&ch);
    if (ch >=97 && ch<=122){
        printf("%c",ch-32);
    }
}