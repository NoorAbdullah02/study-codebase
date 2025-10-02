//Create a C program to take wxam mark from the user and tell him/what grade he/she has got??

#include<stdio.h>

int main (){
int mark;
printf("Enter Your Exam Mark\n");
scanf("%d",&mark);
if (mark>=80){
    printf("Your Grade is A+\n");
} if (mark>=70 ){
printf("Your Grade is B\n");
} if (mark >=60 ){
printf("Your Grade is C\n");
} if (mark>=50 ){
printf("Your Grade is D\n");}
if (mark>=50){
printf("Your Grade is F\n");}



return 0;
}
