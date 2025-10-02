#include<iostream>
using namespace std;
class imran
{
   // private://Incapsulation
    int id ;
    string name;
    public:
    imran (string x,int y)
    {
        getter(x,y);
    }
   void getter(string x,int y)
   {
    name =x;
    id=y;
   }
   int setter(){
    //return name;
    return id;
   }
   string setter1(){
    return name ;

   }
void display()
{
    cout<<"NAme is"<<name<<endl<<"ID is "<<id; 
}

};
int main ()
{
    
imran i1("Abdullah",10);
i1.display();

    return 0;

}