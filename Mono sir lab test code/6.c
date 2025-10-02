//6.Take a input number and print student grade??
#include<stdio.h>


int main (){
double num;
scanf("%lf",&num);
if (num>=80&&num<=100){
    printf("A+\n");
}else if (num>=70&&num<=79){
    printf("A\n");
}else if (num>=60&&num<=69){
    printf("A-\n");
}else if (num>=50&&num<=59){
    printf("B\n");
}else if (num>=40&&num<=49){
    printf("C\n");
}else if (num>=33&&num<=39){
    printf("D\n");
}
else {
    printf("Grade is F\n");
}

return 0;
}
