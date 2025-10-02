#include<stdio.h>
int main ()
{
    int num,rem=0,rev;
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if (temp==rev){
        printf("Its A palindrome Number\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;

}
