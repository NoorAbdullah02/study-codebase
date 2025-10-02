#include<iostream>
using namespace std;
class parent
{
    public:
    parent()
    {
 cout<<"Sheikh ";
    }
};
class child : public parent 
{
    public:
    child(){
cout<<"Noor ";
}
};
class grand: public child{
    public:
    grand()
        {
    
cout<<"Abdullah"<<endl;
        }
} ;
int main ()
{
grand p;
    return 0;

}
