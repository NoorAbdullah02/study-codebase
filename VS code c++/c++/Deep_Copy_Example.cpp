#include<iostream>
using namespace std;
class student {
public:
string name;
int *id;
student(string name,int i){
    this-> name = name;
    id = new int;
    *id = i;
}
student(student &obj){
    name = obj.name;
    id = obj.id;  
}
void get(){
    cout<<"Name is "<<" "<<name<<endl;
    cout<<"Id is "<<" "<< *id<<endl;
}
};
int main (){
student s1("Abdullah",10);
s1.get();
student s2(s1);//Default copy constructor.
*(s2.id ) = 8;
s2.get();
s1.get();
    return 0;
}