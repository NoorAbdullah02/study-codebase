#include<stdio.h>
int main (){
    int x,y;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&x,&y);
    if (x>0&&y>0){
        printf("1st Quardinate\n");
    }
    else if (x<0&&y>0){
        printf("2nd Quardinate\n");
    } 
     else if (x<0&&y<0){
        printf("3rd Quardinate\n");
    } 
     else if (x>0&&y<0){
        printf("4th Quardinate\n");
    }
    float Quotient = (float)x/(float)y;
    int rem1 = x%y;
    
    printf("Quotient is = %.2f\n",Quotient);
    printf("Reminder is = %d\n",rem1);
    
    return 0; 
}