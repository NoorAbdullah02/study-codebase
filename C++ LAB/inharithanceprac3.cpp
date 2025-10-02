/*2.Write a C++ program to create a class called BAUET that has public member variables for the student’s name,
 id. Use the member functions to another class named ICE and display relevant properties of ICEian.*/
 #include<iostream>
 #include<string>
 using namespace std;
  class BAUET{
    public:
    string name;
    int id;
    BAUET(string name,int id){
        this -> name = name;
        this -> id = id;
    }
  };
  class ICE : public BAUET
  {
    public:
    ICE(string name,int id):BAUET(name,id){};
    void display(){
        cout<<"Name is : "<<name<<endl;
        cout<<"ID is : "<<id<<endl;
    }
  };
  int main (){
    string n;
    int i;
    cout<<"Enter Name : ";
    getline(cin,n);
    cout<<"Enter ID : ";
    cin>>i;
    cout<<"ICE Student Information :"<<endl;
    ICE *ice = new ICE(n,i);
    ice -> display();
 return 0;
 }