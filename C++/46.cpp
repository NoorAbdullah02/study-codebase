#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n,max1;
    cin>>n;
    vector <int>v(n);
    int i=0;
    while(i<n)
    {
        cin>>v[i];
        i++;
    }
    int lat=v[0];
    i=0;
    while(i<n)
    {
        if (v[i]>v[0])
        {
            lat=i;
        }
        i++;
    }
    cout<<endl<<lat<<endl;

    return 0;

}
