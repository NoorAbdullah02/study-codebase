#include<iostream>
#include<vector>
using namespace std;

void swap(vector <int> &v)
{
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr)
    {
        if (v[left_ptr]==1&&v[right_ptr]==0)
        {
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if (v[left_ptr]=0)
        {
            v[left_ptr++];
        }
        if (v[right_ptr]=1)
        {
            v[left_ptr--];
        }
    }

}


int main ()
{
    vector < int > v;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    swap(v);
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}
