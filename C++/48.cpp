#include<iostream>
#include<vector>
using namespace std;
int main ()
{
 int n;
 cin>>n;

    vector<int>v(n);
    int i=0;
    while(i<n)
    {
        cin>>v[i];
        i++;
    }
    int same_Number;
    cout<<"Enter The Number"<<endl;
    cin>>same_Number;
    int count=0;
    i=0;
    while(i<n)
    {
        if (v[i]>same_Number)
        {
            count++;;
        }
        i++;
    }
    cout<<"Same Number is "<<count<<endl;

    return 0;

}

