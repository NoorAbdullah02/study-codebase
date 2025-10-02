#include<bits/stdc++.h>
using namespace std;
void slove(){
    string n;
    cin>>n;
    if (n.size()<=2){cout<<"NO"<<endl;
    return ;
    }
    if (n[0] == '1' && n[1] == '0'){
        string str;
        for (int i=2;i<n.size();i++){
            str += n[i];
        }
        if (str == "1" || str[0] == '0'){
            cout<<"NO"<<endl;
            return;
        }
        else cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
        return;
    }
}
int main ()
{
    int n;
    cin>>n;
    while (n--){
        slove();
    }
    return 0;
}