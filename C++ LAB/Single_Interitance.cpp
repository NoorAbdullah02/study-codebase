#include<iostream>
using namespace std;
class Sum {
    int x;
    int y;
    public:
    Sum(int a,int b){
        x = a;
        y = b;
    }
    int res(){
        return x+y;
    }
};
class Result : public Sum {
    public:
    Result(int a,int b):Sum(a,b){}
    void display(){
        cout<<"Sum is "<<res()<<endl;
    }
};
int main (){
 Result *r = new Result(10,20);
 r -> display();
    return 0;
}