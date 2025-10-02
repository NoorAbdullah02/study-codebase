#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string name[n];
    for (int i=0;i<n;i++){
        char ch;
        cin>>ch;
        name[i] = ch;
    }
    sort(name,name+n);
    for (int i=0;i<n;i++){
        cout<<name[i];
    }cout<<endl;
return 0;
}