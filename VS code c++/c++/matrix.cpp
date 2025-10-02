#include<iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j = 0;j<m;j++){
         cin>>arr[i][j];
        }
    }
    int a;
    cin>>a;
    bool check = false;
    for (int i=0;i<n;i++){
        for (int j = 0;j<m;j++){
         if (arr[i][j] == a){
            check = true;
            break;
         }
        }
    }
    if (check)cout<<"will not take number"<<endl;
    else {
        cout<<"will take number"<<endl;
    }
    
return 0;
}