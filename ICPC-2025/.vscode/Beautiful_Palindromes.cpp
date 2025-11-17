#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> result;

        // Strategy: Keep appending a value different from the last element
        // This minimizes palindromic subarrays
        for(int i = 0; i < k; i++) {
            int last = a[a.size() - 1];

            // Find a value different from last
            int toAppend;
            if(last == 1) {
                toAppend = 2;
            } else {
                toAppend = 1;
            }

            result.push_back(toAppend);
            a.push_back(toAppend);
        }

        // Output the result
        for(int val : result) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}