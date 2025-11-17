#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    while (n--) {
        int a;cin>>a;
        string s,r;cin>>s>>r;
        sort(r.begin(),r.end());
        sort(s.begin(),s.end());

        if (s == r)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}