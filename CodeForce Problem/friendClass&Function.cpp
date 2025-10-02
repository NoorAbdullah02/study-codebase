#include<iostream>
using namespace std;
class imran{
    public:
    int x = 10;
    int y = 2;
    friend class F;
    friend void display(imran i);
};
class F{
    public:
    F(imran &i){
            cout<<"Friend Class is Called"<<endl;
        cout<<i.x<<" "<<i.y<<endl;
    }
};
void display(imran i){
    cout<<"Friend Function is Called"<<endl;
cout<<i.x<<endl;
}
int main(){
imran i;
F f(i);
display(i);
    return 0;
}