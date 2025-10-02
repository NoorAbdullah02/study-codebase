#include<iostream>
#include<string>
using namespace std;
void f(string &s){
    int Scount = 0, Bcount = 0;
    for (int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z')Bcount++;
        else if (s[i] >= 'a' && s[i] <= 'z')Scount++;
    }
    if (Bcount == Scount){
        for (int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
    }
        else if (Bcount > Scount){
            for (int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
            }
        }
        else if (Bcount < Scount){
            for (int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
            }
        }
}
int main ()
{
 string s;
 cin>>s;
f(s);
cout<<s<<endl;

return 0;
}
/*
HoUse
ViP
maTRIx
*/