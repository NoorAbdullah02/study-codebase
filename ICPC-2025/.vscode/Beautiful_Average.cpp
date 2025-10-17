

#include<iostream>
#include <vector>
using namespace std;
int main(){
int a;cin>>a;
    while(a--) {
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int max_ele = 0;
        for (  int i = 0; i < n; i++) {
            max_ele = max(arr[i], max_ele);
        }
        cout<<max_ele<<endl;;
    }
    return 0;
}