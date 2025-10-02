#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool check = true;
    int cnt = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] & 1)
            {
                // cout << 0 << endl;
                check = false;
                break;
            }
        }
        if (check)
        {
            for (int i = 0; i < n; i++)
            {
                v[i] /= 2;
            }
            cnt++;
            // cout<<cnt<<endl;
        }
        else
            break;
    }
    cout << cnt << endl;

    return 0;
}