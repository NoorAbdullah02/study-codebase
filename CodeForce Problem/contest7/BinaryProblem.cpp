#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    while (n--){
        int a;
        cin>>a;
        vector<int> v;
        while (a!=0){
         v.push_back(a%2);
         a /=2; 
        }
        int count = 0;
        for (auto it : v){
            if (it == 1){count++;
            cout<<it<<" ";
            }
        }
        int sum = 0;
      for (int i=0;i<count;i++){
        sum += pow(2,i);
      }
      cout<<sum<<endl;
    }
    return 0;
}