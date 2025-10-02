#include<iostream>
#include<fstream>
#include<cstring>
using namespace std ;
int main ()
{
    string name ;
    cout<<"Enter Your Name "<<endl;
    cin>>name;
    ofstream write;
    write.open("Adiba.txt");
    write<<"Hay Adiba I love you"<<endl<<"tuma daka to a jana sanam payar hota ha di Wana sanam do you love me "<<" "<<name<<endl;
    write.close();
    ifstream read;
    read.open("Noor.txt");
    string name2;
    // getline(read,name2);
    // cout<<name2<<endl;
    while(read.eof()==0){
        getline(read,name2);
        cout<<name2<<" ";
    }

    return 0;
}