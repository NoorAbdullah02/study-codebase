#include<stdio.h>
#include<string.h>
int main (){
char str1[100];
char str2[100];
printf("Enter 1st Name :\n");
gets(str1);
printf("Enter last Name :\n");
gets(str2);
strcpy(str1,str2);
printf("String Copy Name is : ");
puts(str1);
return 0;
}

