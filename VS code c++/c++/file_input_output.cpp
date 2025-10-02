#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    string name = "Sheikh Noor Abdullah";
    string name1;
    //of = open file
     ofstream write("Noor1.txt");
     write<<name;
     write.close();
     ifstream read("Noor1.txt");
     getline(read,name1); 
    //read>>name1;
    cout<<name1;
    write.close();

    return 0;
}