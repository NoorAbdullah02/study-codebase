#include<stdio.h>
#include<string.h>
#include<conio.h>
int main (){
char str[200];
fgets(str,200,stdin);
int l= strlen(str);
printf("Lenth is = %d\n",l-1);
printf("String Uppercase Letter is = %s",strupr(str));
printf("String Lowercase Letter is = %s",strlwr(str));
getch();
}



