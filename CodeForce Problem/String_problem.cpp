#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int n1;
    cin>>n1;
    while(n1--){
 string n;
 cin>>n;
 bool found = false;
 if (n.size()>=1){
    for (int i=0;i<n.size();i++){
        if (n[i] == '0'&& n[i+1] == '1' && n[i+2] == '0' || n[i] == '1'&& n[i+1] == '0' && n[i+2] == '1'){
            found = true;
        }
    }
    }
    if (found) cout<<"Good"<<endl;
    else cout<<"Bad"<<endl;
    }
    
return 0;
}