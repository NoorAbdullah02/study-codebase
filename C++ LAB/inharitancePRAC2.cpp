#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int zero_count = 0, one_count = 0;
        char prev = '\0';
        
        for (char c : s) {
            if (c == '0' && prev != '0') {
                zero_count++;
            }
            if (c == '1' && prev != '1') {
                one_count++;
            }
            prev = c;
        }
        
        if (one_count == 0) {
            cout << 0 << endl;
        } else {
            cout << max(zero_count, one_count) << endl;
        }
    }

    return 0;
}
