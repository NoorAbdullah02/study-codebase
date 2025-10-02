#include<iostream>
using namespace std;
class Avg{
    public:
    int a;
    int b;
    int c;
    Avg(){
        a = 0;
        b = 0;
    }
    // Avg(int a,int b){
    //     this -> a = a;
    //     this -> b = b;
    // }
    // Avg (int a = 1 ,int b = 5){
    //     this -> a = a;
    //     this -> b = b;
    // }
    Avg(Avg &r){
    a = r.a;
    b = r.b;
    }
   inline void Avg1(int a,int b,int c);
};
void Avg ::  Avg1(int a,int b,int c){
this -> a = a;
this -> b = b;
this -> c = c;
} 
int main()
{
// Avg a;
// cout<<a.a<<" "<<a.b<<endl;
// Avg a1(2,5);
// cout<<a1.a<<" "<<a1.b<<endl;
// Avg a2(5);
// cout<<a2.a<<" "<<a2.b<<endl;
// Avg a(a1);
// cout<<a.a<<" "<<a.b<<endl;
Avg *b1 = new Avg();
b1 -> Avg1(1,2,3);
cout<<b1->c;

}