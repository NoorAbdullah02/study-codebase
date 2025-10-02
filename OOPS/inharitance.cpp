#include<iostream>
using namespace std;
class rectangle {
    private :
    int l ;
    int b;
    public: 
    rectangle(int l , int b){
        this -> l = l;
        this -> b = b;
    }
    int area(){
        return l*b;
    }
    int get_l(){
        return l;
        }
        int get_b(){
            return b;
        }
};
class Cuboid : public rectangle{
   private:
   int h;
   public:
   Cuboid(int l,int b,int h): rectangle(l,b){
    this -> h = h;
   }
   int cuboid(){
    return get_l()*get_b()*h;
   }
};
int main (){
Cuboid c(2,2,2);
cout<<c.cuboid();

    return 0;
}