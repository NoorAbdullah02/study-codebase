#include<iostream>
using namespace std;
int main ()
{
    int m,n;
    cin>>m>>n;
    char arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int a,b;
    cin>>a>>b;
    bool check ;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (arr[m-1][n-1] == '.' ){
                check = false;
                break;
            }
            if (arr[a][b] == '.' ||arr[a][b] == 'x' ){
                check = true;
                continue;
            }
            
            else {
                check =false;
            }
        }
    }
    if (check)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
     return 0;
}