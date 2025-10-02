#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector <int> v;
    for (int i=0;i<10;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    v.insert(v.begin()+3,37);
    v.erase (v.end()-5);
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}
