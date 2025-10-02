#include<iostream>
#include<cmath>
using namespace std;
class power{
    int num;
    public:
    void set(int n){
     num = n;
    }
    double get(){
        return pow(num,2);
    }
};
int main ()
{
 power p1;
cout<<"Enter A Number : ";
int n;
cin>>n;
p1.set(n);
cout<<p1.get()<<endl;
return 0;
}