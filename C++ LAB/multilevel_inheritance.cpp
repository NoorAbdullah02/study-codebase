#include<iostream>
using namespace std;
class BAUET{
    string name ;
    int id;
    public:
    BAUET(string name,int id){
        this -> name = name ;
        this -> id = id;
    }
    string n(){return name;}
    int i(){return id;}
};
class ICE : public BAUET{
    string Batch;
    string dep;
    public:
    ICE(string name,int id,string b,string d):BAUET(name,id){
    Batch = b;
    dep = d;
    }
    void display(){
        cout<<"Wellcome to " <<dep<<" Family : "<<endl;
        cout<<"Student Name is : "<<n()<<endl;
        cout<<"Student id is : "<<i()<<endl;
        cout<<"Student Batch is : "<<Batch<<endl;
        cout<<"Depertment Name is : "<<dep<<endl;
        cout<<endl;
    }
};
class CSE : public ICE{
    public:
    CSE(string name,int id,string b,string d):ICE(name,id,b,d){};
};
int main (){
    ICE *i = new ICE ("Noor",1010,"14th","ICE"); 
    i -> display();
    CSE *c = new CSE ("Adiba",37,"18th","CSE"); 
    c -> display();
    return 0;
}