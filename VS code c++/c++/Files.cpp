#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main ()
{
    ofstream in("ADiba.txt");
    in<<"i love you??_Do you Love me"<<endl<<"Hoe are "<<endl;
    in.close();
    ifstream out("Adiba.txt");
    string str;
    while(out.eof()==0){
    getline(out,str);
        cout<<str;
}

    out.close();
  
return 0;
} 