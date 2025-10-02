#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        int count = 0;
        for (int i=0;i<name.size();i++){
            if (name[i] == 'O' || (name[i]>='0' && name[i]<='6')  ){count++;}
        }
        //cout<<count<<endl;
        int ball = count % 6;
        int over = count / 6;
        
        if (count > 6 && count %6!=0){
            if (over>1){
            cout<<over<<" "<<"OVERS"<<" "<<ball<<" "<<"BALLS"<<endl;
            continue;
            }
            if (ball == 1){
             cout<<over<<" "<<"OVER"<<" "<<ball<<" "<<"BALL"<<endl;
             continue;

            }
            cout<<over<<" "<<"OVER"<<" "<<ball<<" "<<"BALLS"<<endl;
        }
        if (count<6){
            if (count == 1){
            cout<<count<<" "<<"BALL"<<endl;
            continue;
            }
            cout<<count<<" "<<"BALLS"<<endl;
        }
        
        if (count % 6 == 0){
            if (over>1){
                cout<<over<<" "<<"OVERS"<<endl;
                continue;
            }
            cout<<over<<" "<<"OVER"<<endl;
            
        }
    } 
    return 0;
}