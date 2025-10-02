#include<stdio.h>
int imu(int num){
if (num<=100&&num>=80){
    return 'A';
}
else if (num>=70&&num<=79){
    return 'B';
}
else if (num>=60&&num<=69){
    return 'C';
}
else if (num>=50&&num<=59){
    return 'D';
}
else if (num>=40&&num<=49){
    return 'F';
}
}
int main (){
int Number;
scanf("%d",&Number);
char ch=imu(Number);
printf("%c",ch);

return 0;
}

