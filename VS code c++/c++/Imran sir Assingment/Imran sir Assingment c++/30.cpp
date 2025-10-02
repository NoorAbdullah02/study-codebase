/*7. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot*/
#include<iostream>
using namespace std;
int main ()
{
 float centigrade;
 cout<<"Enter Centigrade : ";
 cin>>centigrade;
 if (centigrade < 0 ){
  cout<<"Freezing weather"<<endl;
 }
 else if (centigrade >= 0 && centigrade <= 10 ){
    cout<<"Very Cold weather "<<endl;
 }
 else if (centigrade >= 10 && centigrade <=20){
    cout<<"Cold weather "<<endl;
 }
 else if (centigrade >= 20 && centigrade <= 30){
    cout<<"Normal in Temp"<<endl;
 }
 else if (centigrade >= 30 && centigrade <= 40){
    cout<<"Its Hot"<<endl;
 }
 else if (centigrade >= 40){
    cout<<"Its Very Hot"<<endl;
 }

return 0;
}