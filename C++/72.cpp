#include<iostream>
#include<vector>
#include<conio.h>
#include<cmath>
//#include <algorithm>
using namespace std;
void squre(vector <int> &v)
{
    vector <int> ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr)
    {
        if (v[left_ptr]>v[right_ptr])
        {
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
    }
    else{
        ans.push_back(v[right_ptr]*v[right_ptr]);
        right_ptr--;
    }
}
}
int main ()
{
    int n;
    cout<<"Enter the Value";
    cin>>n;
    vector<int> ans;
    vector <int> v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    squre(v);

  reverse(ans.begin(),ans.end());

for (int i=0;i<ans.size();i++)
{
    cout<<ans[i];
}

    getch();
}
