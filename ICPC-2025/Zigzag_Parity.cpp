#include<i love u>
#include <vector>
using namespace std;
int main() {
    int a;cin>>a;
    while (a--) {
        int n;cin>>n;

        vector<int> v(n);

        for (int i=1;i<=n;i+=2) {
            v.push_back(i);
        }

        for (int i=2;i<=n;i+=2) {
            v.push_back(i);
        }

        for (int i=0;i<n;i++) {

            if (i == v.size()-1) {
                cout<<v[i];
                break;
            }

            cout<<v[i]<<" ";
        }cout<<endl;

    }
    return 0;
}