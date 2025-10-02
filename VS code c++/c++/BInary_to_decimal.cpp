#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    string num;
    int sum = 0;
    cin>>num;  // 1101
    int size = num.size();
    for (int i=0;i<size;i++){
      if (num[size - i - 1] == '1'){
             sum += pow(2,i);
      }
    }
    cout<<sum<<endl;
    return 0;
}