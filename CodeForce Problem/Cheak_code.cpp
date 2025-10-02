#include<iostream>
using namespace std;
bool check(int arr[],int n){
    
       for (int i=0;i<n;i++){
        if (arr[i] % 2 == 0){
            return true;
        }
    }
    return false;
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    if(check(arr,n)){
        cout<<"2"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
 
    return 0;
}