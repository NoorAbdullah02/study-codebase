#include<iostream>
#include <vector>
using namespace std;
int main() {
    int t;cin>>t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        int min_track = 0;
        min_track = max(min_track, a[0]);
for (int i=0;i<n-1;i++) {
    min_track = max(min_track, 2*(a[i+1] - a[i]));
}
        min_track = max(min_track,2*(k - a[n-1]));
        cout<<min_track<<endl;
    }
    return 0;
}