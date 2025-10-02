#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    vector<int> v;
    for (int i=a;i<=b;i++){
        if (i == 4 || i== 7 || i == 47 || i == 744){
            cout<<i<<" ";
            v.push_back(i);
        }
    }
    if (v.empty())
    {
        cout<<"-1"<<endl;
    }
    return 0;
}