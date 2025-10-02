#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main ()
{
    int n,n1;
    cin>>n;
    for(int i=0;i<n;i++){
    string ch;
    cin>>n1;
    for (int i=0;i<n1;i++){
      cin>>ch[i];
    }
    if (ch[0]>=0 && ch[0]<=9){
        cout<<"NO"<<endl;
        continue;
    }
    string temp = ch;
    sort(ch.begin(),ch.end());
    if (ch == temp){
       cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }
return 0;
}