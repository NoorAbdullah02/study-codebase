#include<stdio.h>
int main ()
{
    char fname[50];
    char mname[50];
    char lname[50];
    scanf("%s %s %s",fname,mname,lname);
    int l1=strlen(fname);
    int l2=strlen(mname);
    int i,j,l3=strlen(lname);
    for (i=0;i<l1;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%c",fname[j]);
        }
        printf("\n");

    }
    for (i=0;i<l2;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%c",mname[j]);
        }
        printf("\n");
    }

        for(i=0;i<l3;i++)
        {
            for (j=0;j<=i;j++)
            {
                printf("%c",lname[j]);
            }
            printf("\n");
        }


    return 0;

}
