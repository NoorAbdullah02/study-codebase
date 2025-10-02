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
    cout<<endl;
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    //For While LOOp//
    cout<<endl;
    int i=0;
    while(i<10)
    {
        cout<<v[i]<<" ";
        i++;
            }

    return 0;

}
