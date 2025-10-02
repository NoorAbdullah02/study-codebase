#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n;
    //cin>>n;

    vector <int> v={2,7,11,15};
   int target_sum=9;
   int count=0;
    for (int i=0;i<v.size();i++)
    {
        for (int j=i+1;j<v.size();j++)
        {
            if (v[i]+v[j]==target_sum)
            {
                int index=i;
                cout<<index;

 }
        }
    }
//cout<<count;

    return 0;

}
