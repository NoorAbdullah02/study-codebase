/*Task 5: Analyze the scenario and construct a program which takes the value from the user 
as input electricity unit charges and calculate total electricity bill according to the given 
condition. Use if-else statement. 
a. For the first 50 units Rs. 0.50/unit 
b. For the next 100 units Rs. 0.75/unit 
c. For the next 100 units Rs. 1.20/unit 
d. For unit above 250 Rs. 1.50/unit 
e. An additional surcharge of 20% is added to the bill*/
#include<iostream>
using namespace std;
class Electric{
    float unit;
    public:
    void set(float u){
     unit = u;
    }
    float display(){
        if (unit <= 50){
            return unit * 0.50 * 0.20;
        }
        else if(unit <= 150){
          return (50*0.50)+((unit - 50)*0.75)+0.20;
        }
        else if(unit <= 250){
            return (50*0.50)+(100*0.75)+((unit - 150)*1.20)+0.20;
        }
        else {
            return (50*0.50)+(100*0.75)+(100*1.20)+((unit - 250)*1.50)+0.20;
        }
    }
};
int main ()
{
 float u;
 cout<<"Enter unit : ";
 cin>>u;
 Electric e;
 e.set(u);
 cout<<"Total Cost is : "<<e.display()<<endl;
return 0;
}