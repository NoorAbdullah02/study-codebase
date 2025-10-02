#include<iostream>
using namespace std;
bool check(int n){
     // if (n<=1)return false;
     int count = 0;
    for (int i=1;i<=n;i++){
        if (n%i == 0){
            count++;
            if (count>2) return false;
        }
    }
   
    return count;
}
int main ()
{
 int num;
 cin>>num;
 while(num--){
    int n;
    cin>>n;
  int ans = check(n);
  if (ans == 2) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
return 0;
}