#include<iostream>
using namespace std;
class sum{
    public:
    void hum(){
      cout<<"Start"<<endl;   
    }
    int hum(int a,int b){
        return a+b;
    }
    float hum(float a,float b, float c){
         return a+b+c;
    }
    void hum(int a,float c){
        cout<<a<<" "<<c<<endl;
    }
};
int main (){
    sum s;
    cout<<s.hum(20,30)<<endl;
    cout<<s.hum(20.5,63.26,46.65)<<endl;
    s.hum(10,20.36f);
    return 0;
}