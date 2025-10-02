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
 int l = n.size();
 if (l<=10) 
 {cout<<n<<endl;
 }
 else {
cout<<n[0]<<l-2<<n[l-1]<<endl;
    }
}
return 0;
}