#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,temp;
scanf ("%f%f%f",&a,&b,&c);
if (a<b){
    temp=a;
    a=b;
    b=temp;
}if (a<c){
temp=a;
a=c;
c=temp;
}if (b<c){
temp=b;
b=c;
c=temp;
}

if (a>=b+c){
    printf("NAO FORMA TRIANGULO\n");
    return 0;
}
else {if (pow(a,2)==pow(b,2)+pow(c,2)){
printf("TRIANGULO RETANGULO\n");
}
if (pow(a,2)>pow(b,2)+pow(c,2)){
    printf("TRIANGULO OBTUSANGULO\n");
}if (pow(a,2)<pow(b,2)+pow(c,2)){
    printf("TRIANGULO ACUTANGULO\n");
}
if (a==b&&a==c){
    printf("TRIANGULO EQUILATERO\n");
}
if(a==b && a!=c || b==c && a!=c){
    printf("TRIANGULO ISOSCELES\n");
}
}
return 0;
}
