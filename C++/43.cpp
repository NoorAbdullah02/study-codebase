#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>v;
    v.push_back(1);
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
    v.resize(2);
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
    v.resize(10);
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;

    return 0;

}
