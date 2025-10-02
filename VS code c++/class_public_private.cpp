#include<iostream>
using namespace std;
class Employ{
    private :
    int a,b,c;
    string name;
    public:
    int d,e;
  
    void set(int a1,int a2,int a3,string name);
    void get(){
        cout<<a<<" "<<b<<" "<<" "<<c<<" "<<d<<endl;;
        cout<<name;
    }
};
void Employ :: set(int a1,int a2,int a3,string name1){
    a=a1;
    b=a2;
    c=a3;
    name=name1;
}

int main (){
Employ imu;
imu.d = 25;

imu.set(1,2,3,"Imran");
imu.get();
return 0;
 
}