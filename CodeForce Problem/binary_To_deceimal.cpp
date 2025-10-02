#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int num;
    cin>>num;
    string n = to_string(num);
    int sum  = 0; 
  for (int i=0;i<n.size();i++){
    if(n[n.size()-i-1] == '1'){
        sum += pow(2,i);
    }
  }
  cout<<sum<<endl;
    return 0;
}