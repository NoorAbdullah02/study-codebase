#include<iostream>
using namespace std;
class parent 
{
    public:
    parent(){
cout<<"Parent Class is Called"<<endl;
    }
};
class sub_calss :parent
{
    public:
sub_calss()
{
cout<<"Sub Class is Called"<<endl;

}
};
class grand : sub_calss{
    public:
grand()
{
    cout<<"Grand Class is Called"<<endl;
}
    
};

int main ()
{
    sub_calss g;

    return 0;

}