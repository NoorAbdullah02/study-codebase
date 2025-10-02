#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix){
for (int i=0;i<matrix.size();i++){
    for (int j=0;j<i;j++){
        cout<<matrix[j][i]<<" ";
    }
    cout<<endl;
}
//    for (int i=0;i<matrix.size();i++){
//         for (int j=0;j<matrix.size();j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
}
int main ()
{
    int n = 3;
    vector<vector<int>>v(n,vector<int> (n));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
   transpose(v);
return 0;
}