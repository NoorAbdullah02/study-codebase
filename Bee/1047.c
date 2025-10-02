#include<stdio.h>
int main (){
int h1,m1,h2,m2;
scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
if (h1==h2&&m1==m2){
    printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",c-a);
}else if (h2>h1&&m2>m1){
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",(h2-h1)-1,(m2-m1));
}
else if (h1<h2&&m1>m2){
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",((h2-h1)-1),((m2+60)-m1));
}
return 0;
}
