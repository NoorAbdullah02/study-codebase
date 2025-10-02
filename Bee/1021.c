#include<stdio.h>
int main (){
float x;
int note[7]={100,50,20,10,5,2,1},money_note[7],a,i;
int coin[5]={50,25,10,5,1},money_coin[5];
scanf("%f",&x);
a=x;
for (i=0;i<7;i++){
    money_note[i]=a/note[i];
    a=a%note[i];
}
a=x*100;
a=a%100;
for (i=0;i<5;i++){
    money_coin[i]=a/coin[i];
    a=a%coin[i];
}
printf("NOTAS:\n");
for(i=0;i<6;i++){
    printf("%d nota(s) de R$ %d\n",money_note[i],note[i]);
}
printf("MOEDAS:\n");
printf("%d nota(s) de R$ %d\n",money_note[6],(float)note[6]);
for (i=0;i<5;i++){
    printf("%d nota(s) de R$ %.2f\n",money_note[i],(float)coin[i]);
}
return 0;
}
