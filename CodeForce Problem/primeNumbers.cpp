#include<bits/stdc++.h>
using namespace std;
void f(int a,char ch){
    for (int i=0;i<a;i++){
        if (i == a-1){
            cout<<ch;
            continue;
        }
        cout<<ch<<" ";
    }cout<<endl;
}
int main ()
{
 int n;
 cin>>n;
 while(n--){
    int a;
    char ch;
    cin>>a>>ch;
    f(a,ch);
 }
return 0;
}

