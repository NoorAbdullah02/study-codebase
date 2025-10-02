#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cin>>ch;
    if (ch>=97 && ch<=121){
        char c = ch+1;
        cout<<c<<endl;
    }
    else if (ch == 'z') cout<<"a"<<endl;

    return 0;
}