#include<stdio.h>
#include<string.h>
#include<conio.h>
int main (){
char str1[100];
char str2[100];
printf("Enter 1st Name :\n");
gets(str1);
printf("Enter last Name :\n");
gets(str2);
if (strcmp(str1,str2)==0){
    printf("These are Equal\n");
}
else{
printf("These are not equal\n");
}
getch();
}
