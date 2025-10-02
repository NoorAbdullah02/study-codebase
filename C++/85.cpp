#include<iostream>
#include<cstring>
using namespace std;
template<class T1,class T2,class T3>
class A{
    T1 name[10];
    T2 id[10];
    T3 cgpa[10];
    int counter = 0;
    public:
    A(){
        for (int i=0;i<5;i++){
        cout<<"Enter Student name for student "<<" "<<counter+1;
        cin>>name[i];
        cout<<"Enter Student id for student "<<" "<<counter+1;
        cin>>id[i];
        cout<<"Enter Student CGPA for student "<<" "<<counter+1;
        cin>>cgpa[i];
        counter++;
        }
    }
    void display(){
        counter = 0;
        for (int i=0;i<5;i++){
            cout<<"Student"<<" "<<counter+1<< "Information is :"<<"Name is :"<<
            " "<<name[i]<<endl<<"Id is :"<<" "<<id[i]<<endl<<"CGPA is :"<<" "<<cgpa[i]<<endl;
            counter++;
        }
    }
};
int main ()
{
    A <string,int,double> a;
    a.display();

    return 0;
}
