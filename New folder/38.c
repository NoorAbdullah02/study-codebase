#include<stdio.h>
void call_by_value(int x){
    printf("%d\n",x);

x=10;
printf("%d\n",x);
}
int main ()
{
    int a=15;
    call_by_value(a);
    printf("%d\n",a);

    return 0;

}
