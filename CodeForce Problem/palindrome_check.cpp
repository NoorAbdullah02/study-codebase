// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main ()
// {
//  int num;
//  cin>>num;
//  string n = to_string(num);
//  string m = n;
//  reverse(n.begin(),n.end());
//  if (n == m)cout<<"It's palindrome Number"<<endl;
//  else cout<<"Not Palindrome"<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int m;
//     cin>>m;
//  int n = 0;
//  int n1 = 1;
//  int next_term;
//  cout<<n<<" "<<n1<<" ";
//  for (int i=2;i<m;i++){
//     next_term = n+n1;
//     n = n1;
//     n1 = next_term;
//     cout<<next_term<<" ";
//  }
// return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main ()
// {
//  int num;
//  cin>>num;
//  int n = num;
//  double sum = 0;
//  while (num !=0){
//     int rem = num % 10;
//     sum += pow(rem,3);
//     num /=10;
//  }
//  cout<<sum<<endl;
//  if (sum == n)cout<<"Number is a Armstrom Number"<<endl;
//  else cout<<"Sorry"<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int f(int n){
// if (n == 0)return 1;
// return f(n-1) * n;
// }
// int main ()
// {
//  int n;
//  cin>>n;
//  cout<<f(n)<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int f(int n){
//     if (n == 0)return 0;
//     if (n == 1)return 1;
//     return f(n-1) + f(n-2);
// }
// int main ()
// {
//  int n;
//  cin>>n;
//  cout<<f(n-1)<<endl;
// return 0;
// }
// Call By Value &&  Call By Reference
#include<iostream>
using namespace std;
void swap(int &a,int &b){ //actual parameter
 a = 50;
 b = 70;
 b = a+b;
 a = b-a;
 b = b-a;
}
int main ()
{
 int n,n1;
 n = 10;
 n1 = 20;
 swap(n,n1);//formal parameter
 cout<<n<<" "<<n1<<endl;
return 0;
}