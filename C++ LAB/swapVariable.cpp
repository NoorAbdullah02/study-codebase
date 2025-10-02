#include<iostream>
using namespace std;
class Change{
    int x,y;
    public:
    Change(int x,int y){
        this -> x = x;
        this -> y = y;
    }
    void get(){
        cout<<"Before Swap "<<x<<" "<<y<<endl;
        int temp = x;
        x = y;
        y = temp;
        cout<<"After Swap "<<x<<" "<<y<<endl;
    }
};
int main ()
{
    int x,y;
    cout<<"Enter Two Numbers :"<<endl;
    cin>>x>>y;
    Change *c = new Change (x,y);
    c->get();
 
return 0;
}