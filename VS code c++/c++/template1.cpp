  #include<iostream>
  using namespace std;
  template <class T1,class T2>
  class A{
   T1 name;
   T2 id;
   public:
     A(T1 name , T2 id){
        this ->name = name; 
        this->id = id;
     }
     void display();
  };
  template <class T1,class T2>
  void A<T1,T2> :: display(){
        cout<<name<<" "<<id<<endl;
     }
     template<class T3>
     void imu(T3 a){
       cout<<a<<endl;
     }
     void imu(int x){
        cout<<"X is "<<" "<<x<<endl;
     }
  int main ()
  {
     A <string,char> a("Abdullah",'A');
     a.display();
     imu("ADIBA");
    return 0;
  }