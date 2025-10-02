#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    int a,b;cin>>a>>b;
    bool check = false,none = false;
    int row = -1,col = -1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if (arr[i][j] == '.'){
                check = true;
                row = i;
                col = j;
            }
            if (arr[i][j] == 'x'){
                none = true;
            }
        }
    }
    //cout<<check<<" "<<row<<" "<<col<<endl;
    //cout<<arr[a][b]<<endl;
    if (check){
    if (arr[row][col] != arr[a][b]){
        cout<<"no"<<endl;
        return 0;
    }}
    if (none){
        cout<<"yes"<<endl;
        return 0;
    }
    
    if (check){
        if ((arr[a][b] == '.' || arr[a][b] == 'x'))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }else {
        cout<<"no"<<endl;
    } 

    
    return 0;
}