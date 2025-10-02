#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string n;
    getline(cin,n);
    for (int i=0;i<n.size();i++){
        if (n[i] == ',') 
        n[i] = ' ';
        if (n[i] >='a' && n[i]<= 'z') 
        n[i] -=32;
    
    else if  (n[i] >='A' && n[i]<= 'Z') {
        n[i] += 32;
    }
    }
    cout<<n<<endl;
    return 0;
}