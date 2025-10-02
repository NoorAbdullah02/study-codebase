//Function Overloading
#include<iostream>
using namespace std;
class food{
    public :
     int imu(int a,int b){
         return a+b;
     }
     float imu(float a, float b){
        return a+b;
     }
};
int main ()
{
 food *f = new food();
 cout<<f->imu(5,6)<<endl;
 float result = f->imu(5.6f,6.2f);
cout<<result<<endl; 
return 0;
}