#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        int rem = 0;
        string name;
        //int count = 0;
        name.empty();
        name = to_string(num);
        //cout<<name.size()<<endl;
        if (num  == 105){
           rem = num % 10;
           num /= 10;
        }
        else{
            rem = num % 100;
            num /= 100;
        }
        if (rem < 4){cout<<"NO"<<endl;
        continue;
        }
         int x = rem * log10(num);
        // cout<<x<<" "<<rem<<" "<<num<<" "<<endl;
      if((rem*log10(num)) == rem){
        cout<<"YES"<<endl;
        }
      else cout<<"NO"<<endl;
     }
    return 0;
}
