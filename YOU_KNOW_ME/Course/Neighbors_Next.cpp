#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool check_nei(int n, int m, vector<string> &v,int a,int b){
    a -= 1;
    b -= 1;

    int dx[] = {-1,1,0,0,-1,-1,1,1};
    int dy[] = {0,0,-1,1,-1,1,-1,1};

    for (int i=0;i<8;i++){
        int na = a + dx[i];
        int nb = b + dy[i];
    
        if( na>=0 && na < n && nb >=0 && nb<m){
            if(v[na][nb] !='x'){
                return false;
            }
        }
    
    }
    return true;
    
} 
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    for (int i=0;i<n;i++){
        cin>>grid[i];
    }
    int a,b;
    cin>>a>>b;

    if (check_nei(n,m,grid,a,b))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}