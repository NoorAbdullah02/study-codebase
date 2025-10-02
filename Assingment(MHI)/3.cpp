/*Task 3: Analyze the scenario and construct a program which asks for names of subjects 
(minimum 7), and then ask for marks in each subject one by one. After the input, it should 
display the marks of subjects against their name (use setw) manipulator). At the end, it 
should display the total calculated percentage marks (assume each subject has a 
maximum of 100 marks). */
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
class Task3{
    public:
    int size = 7;
    vector<string> subname;
    vector<float> marks;
    Task3(): subname(size),marks(size){} 
    float total_mark = 0;
    void input(){
      for (int i=0;i<7;i++){
        cout<<"Enter Subject : "<<i+1<<" ";
        cin>>subname[i];
      }
      cout<<"---------------------------"<<endl;
      for (int i=0;i<7;i++){
        cout<<"Enter "<<subname[i]<<" Mark : ";
        cin>>marks[i];
        total_mark += marks[i];
    }
    }
    void display(){
      for (int i=0;i<7;i++){
        cout<<setw(20)<<subname[i]<<" "<<setw(15)<<marks[i]<<endl;
      }
      cout<<setw(21)<<"Average Mark is : "<<setw(18)<<total_mark/7.0<<endl;
        }
};
int main ()
{
Task3 t;
t.input();
t.display();
return 0;
}