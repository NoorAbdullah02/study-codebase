#include<iostream>
using namespace std;
class sum{
    public:
    void add(int x,int y){
        cout<<x+y<<endl;;
    }
    void add(int x,int y,int z){
        cout<<x+y+z<<endl;
    }
    void add(double x,double y){
        cout<<x+y<<endl;
    }
};
int main (){
sum s;
s.add(2,3);
s.add(2,3,8);
s.add(2.26,6.85);

    return 0;

}