// #include<iostream>
// using namespace std;
// class add{
//     public:
//     add();
//     add(int a,int b){
//         cout<<a<<" "<<b<<endl;
//     }
//     add(double a,double b){
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main ()
// {
//     add *a = new add(10,15);
//     add *b = new add(20.36,44.25);
// return 0;
// }
// #include<iostream>
// using namespace std;
// class add{
//     public:
//     int get(int a,int b){
//         return max(a,b);
//     }
//     char get(char a,char b){
//           return max(a,b);
//     }
// };
// int main ()
// {
//  add a;
//  cout<<a.get(10,20)<<endl;
//  cout<<a.get('a','g')<<endl;

// return 0;
// }
// #include<iostream>
// using namespace std;
// class base{
//     public:
//     void get(){
//         cout<<"Base Class is Called"<<endl;
//     }
// };
// class Derived : public base{
//     public:
//     void get(){
//         cout<<"Derived class is Called"<<endl;
//     }
// };
// int main ()
// {
//  base *b = new Derived;
//  b->get();
//  Derived *d = new Derived;
//  d->get();
// return 0;
// }
// #include<iostream>
// using namespace std;
// class base {
//     public:
//     virtual void get() = 0; // pure Virtual Function
// };
// class Derived : public base{
//     public:
//     void get()
//     {cout<<"Derived Class is Called"<<endl;}
// };
// int main ()
// {
//  base *b = new Derived;
//  b->get();
// return 0;
// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// class Shape{
//     public:
//      virtual int area() = 0;
// };
// class Regtangle : public  Shape{
//    public:
//    int l = 5,w = 10;
//    int area(){
//      return l*w;
//    }
// };
// class Squre : public Shape{
//    public:
//    int r = 5;
//    int area(){
//     return M_PI * r * r;
//    }
//   };
// int main ()
// {
//  Shape *s = new Regtangle;
//  cout<<s->area()<<endl;
//  Shape *s1 = new Squre;
//  cout<<s1->area()<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// class add{
//     public:
//     add(int a){
//         cout<<a<<endl;
//     }
//     add(int a,int b){
//         cout<<a<<" "<<b<<endl;
//     }
//     add(double y){
//         cout<<y<<endl;
//     }
// };
// int main ()
// {
//  add a(5.15);
 
// return 0;
// }
// #include<iostream>
// using namespace std;
// class add{
//     public:
//     static int x;
//     add(){
//        x++;
//        cout<<"Object Created "<<x<<" Times"<<endl;
//     }
// };
// int add :: x = 0;
// int main ()
// {
//  add a;
//  add b;
//  add c;
// return 0;
// }
// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A (int x) : a(x){};
//     friend void get(class A,class B);
// };
// class B{
//     int b;
//     public:
//     B(int x):b(x){};
//     friend void get(class A,class B);
// };
// void get(class A a1,class B b1){
//     cout<<a1.a<<" "<<b1.b<<endl;
// }
// int main ()
// {
//     A a(10);
//     B b(20);
//     get(a,b);
// return 0;
//}
// #include<iostream>
// using namespace std;
// class point{
//     public:
//     int x,y;
//     point (int a,int b): x(a),y(b){
//         cout<<"Parameterized Constructor is called"<<endl;
//     }
//     point (): x(0),y(0){
//         cout<<"Default Constructor is Called"<<endl;
//     }
//     void display(){
//         cout<<"Condinate is : "<<x<<" "<<y<<endl;
//     }

// };
// int main ()
// {
//  point p1(10,20);
//  p1.display();
//  point p;
//  p.display();
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main ()
// {
//  int a = 10, b = 25;
//  b = a+b;
//  a = b-a;
//  b = b-a;
//  cout<<a<<" "<<b<<endl;
//  char ch = 'a';
//  int a = 97;
//  cout<<(int)ch<<" "<<(char)(a-32)<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main ()
// {
//  int n;
//  cin>>n;
//  int y = n / 365;
//  n = n % 365;
//  int m = n / 30;
//  int d = n % 30;
//  cout<<y<<" Years "<<m<<" Months "<<d<<" days "<<endl;

// return 0;
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main ()
// {
//  string n;
//  cin>>n;
//  reverse(n.begin(),n.end());
//  cout<<n<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main ()
// {
//  int year;
//  cin>>year;
//  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))cout<<year<<" is a Leap Year"<<endl;
//  else {
//     cout<<year<<" is Not a Leap Year"<<endl;
//  }
// return 0;
// }
// #include<iostream>
// using namespace std;
// class Print{
//     string title;
//     public:
//     void set(string title){
//         this-> title = title;
//     }
//     void display(){
//         cout<<" Title Name is : "<<title<<endl;
//     }

// };
// int main ()
// {
//  Print p;
//  p.set("Noor");
//  p.display();
// return 0;
// }
// #include<iostream>
// using namespace std;
// struct imu
// {
//     string name ;
//     int id; 
// };

// int main ()
// {
//  imu i[3];
//  i[0] = {"Abdullah",10};
//  i[1] = {"Noor",20};
//  i[2] = {"Sheikh",45};
//  for (int k=0;k<3;k++){
//     cout<<i[k].name<<" "<<i[k].id<<endl;
//  }
// return 0;
// }
// #include<iostream>
// using namespace std;
// struct address {
//     string city;
//     string postcode;
// };
// struct Employe{
//     string name ;
//     int id;
//     address add;
// };

// int main ()
// {
//  Employe e1;
//  e1.name = "Abdullah";
//  e1.id = 20;
//  e1.add.city = "Natore";
//  e1.add.postcode = "6400";
//  cout<<e1.name <<" "<<e1.id<<" "<<e1.add.city<<" "<<e1.add.postcode<<endl;
// return 0;
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main ()
// {
//  string name;
//  cin>>name;
//  string n = name;
//  reverse(name.begin(),name.end());
//  if (name == n)cout<<"YES"<<endl;
//  else cout<<"NO"<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main ()
// {
//  int n;
//  cin>>n;
//  for(int i=0;i<n;i++){
//     for (int j=0;j<=i;j++){
//         cout<<"*";
//     }cout<<endl;
//  }
// return 0;
// }
#include<iostream>
using namespace std;
int main ()
{
 int n;cin>>n;
 for (int i=0;i<n;i++){
    for (int j=0;j<=n-i;j++){
        cout<<" ";
    }
    for (int k=0;k<=i;k++){
        cout<<"*";
    }cout<<endl;
 }
return 0;
}