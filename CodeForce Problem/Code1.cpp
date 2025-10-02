#include <iostream>
using namespace std;
struct Address {
    string city;
    int zip;
};
struct Employee {
    string name;
    int id;
    Address addr;  
};
int main() {
    Employee e1;
    e1.name = "Noor";
    e1.id = 1010;
    e1.addr.city = "Natore";
    e1.addr.zip = 6400;
    cout << "Employee Name: " << e1.name << endl;
    cout << "Employee ID: " << e1.id << endl;
    cout << "City: " << e1.addr.city << endl;
    cout << "ZIP: " << e1.addr.zip << endl;
    return 0;
}
