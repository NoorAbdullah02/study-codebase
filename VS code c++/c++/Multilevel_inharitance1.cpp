 #include<iostream>
 using namespace std;
 class Base{
    int id;
    protected:
    int age;
    public:
    void get(int i,int a){
     id = i;
     age = a;  
    }
    int set1(){
        return id;
    }
 };
 class BAse1{
    string name;
    public:
    void get1(string s){
        name = s;
    }
    string set(){
        return name;
    }
 };
 class MAin : public Base ,  public BAse1{
    public:
    void display(){
       cout<<"name is"<<" "<<set()<<endl;
       cout<<"ID is"<<" "<<set1()<<endl; 
       cout<<"Age is "<<" "<<age<<endl;
    }
 };
 int main ()
 {
  MAin m;
  m.get(10,18);
  m.get1("Abdullah");
  m.display();

 return 0;
 }