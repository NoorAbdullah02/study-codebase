//Iterative
/*
#include <iostream>
using namespace std;
int main() {
//Next grather element
int arr[] = {1,3,2,1,8,6,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
int res[n];
for (int i=0;i<n;i++){
    res[i] = -1;
    for (int j=i+1;j<n;j++){ 
        if ((arr[j])>arr[i]){
            res[i] = arr[j];
            break;
        }
    }
}
for (int i=0;i<8;i++){
    cout<<res[i]<<" ";
}
    
    return 0;
}*/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> st;
    vector<int> res(n);
    res[n-1] = -1;
    st.push(arr[n-1]);
    for (int i=n-2;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i] ){
            st.pop();
        }
        if (st.empty())res[i] = -1;
        else res[i] = st.top();
        st.push(arr[i]);
        
    }
    for(auto it:res){
        cout<<it<<" ";
    }
 
return 0;
}