// fibonacci Number 
/*#include<iostream>
using namespace std;
int main ()
{
 int a = 0,b = 1;
 cout<<a<<" "<<b<<" ";
 for (int i=2;i<5;i++){
    int next = a+b;
    a = b;
    b = next;
    cout<<next<<" ";
 }
return 0;
}*/
// Palindrome Number
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main ()
{
 string s;
 cin>>s;
 string r = s;
 reverse (s.begin(),s.end());
 if (s == r)cout<<"Number is a Palindrome"<<endl;
 else cout<<"Not Palindrome"<<endl;
return 0;
}*/
//AramsTrom Number
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int x;
 cin>>x;
 int a = x;
 float sum = 0;
 while(x!=0){
   int rem = x % 10;
   sum = sum + pow(rem,3);
   x /= 10;
 }
 //cout<<sum<<endl;
if(a == sum)cout<<"Number is a Aramstrome Number"<<endl;
else cout<<"Not Armsstrom"<<endl;
return 0;
}
