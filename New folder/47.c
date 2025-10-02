#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void imu(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b&&a>c&&a>d){
        printf("%d is the largest Number\n",a);
    }
    else if(b>a&&b>c&&b>d){
        printf("%d is the Largest Number\n",b);
    }
    else if (c>a&&c>b&&c>a){
        printf("%d is the largest Number \n",c);
    }
    else {
        printf("%d is the largest Number\n",d);
    }
}
void imu1(){
int i,j,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
    for (j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
}
void imu2(){
int i,j,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
    for (j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
}
void imu3(){
int i,j,l,n;
scanf("%d",&n);
char arr[n];
//gets(arr);
scanf("%s",arr);
l=strlen(arr);
for (i=0;i<l;i++){
    for (j=0;j<=i;j++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
}
void imu4()
{
int i,j,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
    for (j=1;j<=n-i;j++)
    {
    printf(" ");
    }
    for (j=1;j<=2*i-1;j++)
    {
        printf("%c",j+64);
    }
    printf("\n");
}
for (i=n;i>=1;i--){
    for (j=1;j<=n-i;j++)
    {
       printf(" ");
    }
    for (j=1;j<=2*i-1;j++)
    {
        printf("%c",j+64);
    }
    printf("\n");

    }
}
void imu5()
{
    int a,b;
    char ch;
    scanf("%d %c %d",&a,&ch,&b);
    switch(ch){
case '+':
    {
        printf("Sum is = %d\n",a+b);
        break;
    }
case '-':
    {
        printf("Subtraction is %d \n",a-b);
        break;
    }
case '*':

    {
        printf("Multification is %d\n",a*b);
        break;
    }
case '/':
    {
        printf("Division is %.2f\n",(float)a/(float)b);
        break;
    }
}
}
void imu6(){
int t1=0,t2=1,n;
int next_term;
scanf("%d",&n);
printf("%d %d ",t1,t2);
for (int i=3;i<=n;i++)
{
    next_term=t1+t2;
    t1=t2;
    t2=next_term;
    printf("%d ",next_term);
}
}
void imu7(){
int rev,rem,n;
scanf("%d",&n);
int temp=n;

while (n!=0)

{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("Reverse Number is %d\n",rev);
if (temp==rev)
{
    printf("The Number is a Palindrome Number\n");
}
else  {
    printf("Not Palindrome\n");
}
}
void imu8(){

int i,n;
scanf("%d",&n);
for (i=1;i<=n;i=i+2){
    printf("Odd number Serise is %d \n",i);
}
printf("\n");
for (i=2;i<=n;i=i+2){
    printf("Even Number Serise is %d \n",i);
}
}
void imu9()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Large = arr[0];
    for (i=0;i<n;i++){
        if (arr[i]>arr[0]){
            Large = arr[i];
        }
    }
printf("Largest Number is %d\n",Large);
}
void imu10(){
    int n,vowel=0;
    scanf("%d",&n);
char arr[n];
scanf("%s",arr);
int l= strlen(arr);
for (int i=0;i<n;i++){
if (arr[i]=='a'||arr[i]=='e'||arr[i]=='o'||arr[i]=='i'||arr[i]=='u'||
    arr[i]=='A'||arr[i]=='E'||arr[i]=='O'||arr[i]=='I'||arr[i]=='U'){
        vowel++;
    }
}
    printf("Lenth is %d\n",l);
    printf("Vowel is %d\n",vowel);
    printf("Consonant is %d\n",l-vowel);

}
void imu11()
{
    int x=12;
int y=x++;
    printf("%d %d \n",x,y);
y=++x;
        printf("%d %d \n",x,y);
y=x--;
            printf("%d %d \n",x,y);
y=--x;
            printf("%d %d \n",x,y);

}
void imu12(){
int var[]={10,100,200};
int max=3;
int i,*ptr;
ptr=var;
for (i=0;i<max;i++)
{
    printf("Address of var[%d] = %x\n",i,ptr);
        printf("Value of var[%d] = %d\n",i,*ptr);
ptr++;
}

}
imu13(){
    int i,j;
char fname[200];
char mname[200];
char lname[200];
printf("Enter First Name:\n");
gets (fname);
printf("Enter Middle Name:\n");
gets(mname);
printf("Enter Last Name:\n");
gets(lname);
int l=strlen(fname);
int l1=strlen(mname);
int l2=strlen(lname);
for (i=0;i<l;i++)
{
    for (j=0;j<=i;j++){
        printf("%c",fname[j]);
    }
    printf("\n");

}
for (i=0;i<l1;i++)
{
    for (j=0;j<=i;j++)
    {
        printf("%c",mname[j]);
    }
    printf("\n");
}
for (i=0;i<l2;i++)
{
    for (j=0;j<=i;j++)
    {
        printf("%c",lname[j]);
    }
    printf("\n");
}
}
imu14()
{
    int i,j;
    for (i=1;i<=10;i++)
    {
        printf("%d*%d = %d\n",6,i,6*i);
    }
}
imu15()
{
    char str[200];
    gets(str);
    printf("%s\n",strupr(str));
        printf("%s",strlwr(str));

}
imu16()
{
    int i;
    for (i=0;i<10;i++){

        printf("%d\t",i);

    if (i==6)
    {
        break;
    }
    }

}
void imu17()
{
    int x[]={1,2,3};
    int *ptr,i;
    ptr=x;
    for (i=0;i<3;i++)
    {
        printf("%u\n",&x[i]);
        printf("%d\n",x[i]);

        printf("%u\n",*(x+i));
        printf("%u\n",i[x]);

        printf("%u\n",*ptr);

    }
}
void imu18()
    {
        float m,n;
        printf("Enter M And N\n");
        scanf("%f %f",&n,&m);
        int squre=pow(n,2);
        int cube=pow(n,3);
        int th7=pow(n,7);
        int mth=pow(n,m);
        printf("Squre is %d\n",squre);
        printf("Cube is %d\n",cube);
        printf("7th is %d\n",th7);
        printf("n power m is %d\n",mth);
    }
imu19()
{
    int i,n,sum =0;
    printf("Enter I & n \n");
    scanf("%d %d",&i,&n);
    for (int j=i;j<=(n-i);j++)
    {
        sum=sum+(i+j);
    }
    printf("Sum is %d\n",sum);
}
imu20()
{
    int a=10;
    float b=10;
    printf("%f\n",a+b);
}
int main ()
{
//imu();
//imu1();
//imu2();
//imu3();
//imu4();
//imu5();
//imu6();
//imu7();
//imu8();
//imu9();
//imu10();
//imu11();
//imu12();
//imu13();
//imu14();
//imu15();
  //imu16();
  //imu17();
//imu18();
//imu19();
imu20();
    return 0;

}
