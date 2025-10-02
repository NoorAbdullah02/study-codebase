#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n;
    cin>>n;
    while(n--){
       string num;
        cin>>num;
        for(int i= num.size()-1;i>=0;i--){
            //if(i == 0)cout<<num[i];
            cout<<num[i]<<" ";
        }cout<<endl;
    }
    //    if (num == 0){
    //     cout<<"0";
    //     continue;
      // }
        //string name = "";
       // name.empty();
        // while (num!=0){
        //     int rem = num % 10;
        //     cout<<rem<<" ";
        //     num /= 10;
        // }
        // cout<<endl;
        // if (!name.empty())name.pop_back();
        // cout<<name<<endl;
    
    return 0;
}