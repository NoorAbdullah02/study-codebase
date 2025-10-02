#include<iostream>
#include<cmath>
using namespace std;
class A{
   long long int a,b,c,d;
   public:
   A(long long int a,long long int b,long long int c,long long int d){
    this->a=a;
    this->b=b;
    this->c=c;
    this->d=d;
    
   }
   void set(){
 long long int multi = 0,rem =0,rem1=0,i=0;
 multi = a*b*c*d;
 while(i<1){
    rem = multi%10;
    multi=multi/10;
    rem1 = multi%10;
    i++;
 }  
 cout<<rem1<<rem<<endl;
   }
};
int main ()
{
 long long int a,b,c,d;
 cin>>a>>b>>c>>d;
 A x(a,b,c,d);

  x.set();

return 0;
}