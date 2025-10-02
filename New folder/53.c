#include<stdio.h>
int main ()
{
    char str[200];
    gets(str);
    int l=strlen(str);
    int count=0;
    for (int i=0;i<l;i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||
            str[i]=='I'||str[i]=='O'||str[i]=='U'){
                count++;
            }
    }
    printf("Lenth is %d\n",l);
    printf("Vowles is = %d\n",count);
    printf("Consonant is %d\n",l-count);
    return 0;

}
