#include<iostream>
using namespace std;
class Employ{
    public:
    string name;
    int age;
    float salary;
    Employ(){} // Default Constructor
    Employ (string name,int age,float salary){ // Parametirized Constructor
        this-> name = name;
        this -> age = age;
        this-> salary = salary;
    }
    void get_data(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};
void get_Data(Employ a){
   cout<<a.name<<" "<<a.age<<" "<<a.salary<<endl;
}
int main ()
{
    Employ e;
    e.name = "Noor";
    e.age = 18;
    e.salary = 1020;
    Employ e1("Abdullah",18,1000);
    e1.get_data();
    get_Data(e);
    Employ s1(e); // Deep Copy
    s1.get_data();
    Employ s2 = e1;
    get_Data(s2); // Deep Copy

    return 0;
}