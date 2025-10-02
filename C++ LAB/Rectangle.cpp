#include<iostream>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll a, n, k;
        cin >> a >> n >> k;

        ll min_x = a >> n;
        ll max_x = a >> n;

        for (ll i = 0; i < k; i++) {
            min_x = (min_x + 1) / 2;
            max_x = max_x / 2;
        }

        cout << max_x << " " << min_x << endl;
    }

    return 0;
}
