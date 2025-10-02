#include<iostream>
using namespace std;
class Simple_interest{
    int tk;
    float interest;
    int time_period;
    public:
    Simple_interest(int t,float i,int p){
         tk = t;
         interest = i;
         time_period = p;
    }
    void display(){
        float Interest = (tk*interest*time_period)/100;
        float SI = tk + Interest;
        cout<<"Simple_interest is "<<" "<<SI;
    }
};
int main ()
{
    int tk;
    float interest;
    int time_period;
    cin>>tk>>interest>>time_period;
    Simple_interest s = Simple_interest(tk,interest,time_period);
    s.display();
      
return 0;
}