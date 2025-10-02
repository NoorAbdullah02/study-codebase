//Create a C program to take wxam mark from the user and tell him/what grade he/she has got??

#include<stdio.h>
int main (){
int mark;
printf("Enter Your Exam Mark\n");
scanf("%d",&mark);
if (mark>=80&& mark<=100){
    printf("Your Grade is A+\n");
} else if (mark>=70&& mark<=79 ){
printf("Your Grade is B\n");
} else if (mark >=60&& mark<=69 ){
printf("Your Grade is C\n");
} else if (mark>=50&& mark<=59 ){
printf("Your Grade is D\n");}
else if (mark>=50 ){
printf("Your Grade is F\n");}



return 0;
}

