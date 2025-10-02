#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
    string n;
    cin>>n;
    int count = 0;
    for (int i=0;i<n.size();i++){
        if (n[i] == 'W' || n[i] == 'N') count--;
        else{
            count++;
        }
    }
    int over = 6;
   for (int i=0;i<to_string(count).size();i++){
    if (count >= 1 || count <= 5) cout<<count<<" "<<"BALL"<<endl;
    else if (count >=6) cout<<i+1 <<"1"<<"OVER"<<" "<<count-over<<" "<<"BALL"<<endl;
   }
    }
return 0;
}