#include<iostream>
using namespace std;
int main (){
    string str;
    int count = 0;
    getline(cin,str);
    for (int i=0;i<str.size();i++){
        if (str[i] == ' ' && str[i-1]!=' ')count++;
    }
    cout<<count+1<<endl;
    return 0;
}