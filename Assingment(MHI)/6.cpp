/*Task 6: Write a program which takes two integer values as user input and then check if 
both are equal and tells user the result. If not equal, then it should also display the 
maximum value as output. Use switch statement.*/
#include<iostream>
using namespace std;
class check{
    public:
    int a,b;
    check(int a,int b){
        this -> a = a;
        this -> b = b;
    }
    void display(){
        switch(a == b){
            case true : {
                cout<<"Both Are Equal"<<endl;
                break;
            }
            case false : {
               cout<<"Both Are Not Equal"<<endl;
               cout<<"Minimum Value is : "<<min(a,b)<<endl;
            }
        }
    }
};
int main ()
{
 int a,b;
 cout<<"Enter Two Values : ";
 cin>>a>>b;
 check c(a,b);
 c.display();
return 0;
}