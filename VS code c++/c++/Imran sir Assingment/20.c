#include<stdio.h>
int main (){
    char ch;
    printf("Enter A Character\n");
    scanf("%c",&ch);
    if (ch >=65 && ch<=90){
        printf("%c",ch+32);
    }
}