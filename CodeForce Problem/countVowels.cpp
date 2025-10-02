#include<bits/stdc++.h>
using namespace std;
int f(string &name){
    int count = 0;
    for (int i=0;i<name.length();i++){
        if (name[i] == 'a' || name[i] == 'e' ||name[i] == 'i'|| name[i] == 'o' ||name[i] == 'u' ||
        name[i] == 'A' || name[i] == 'I' || name[i] == 'E' ||name[i] == 'O' ||name[i] == 'U' )count++;
    }
    return count;
}
int main (){
    string name;
    getline(cin,name);
    cout<<f(name)<<endl;
    return 0;
}