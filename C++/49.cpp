#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    vector <int>v(n);
    int i=0;
    while(i<n)
    {
        cin>>v[i];
        i++;
    }
    i=0;
    bool sorted=false;
    while(i<n)
    {
        if(v[i]<=v[i-1])
        {
            sorted=true;
        }
        i++;
    }
    cout<<sorted<<endl;
    return 0;

}
