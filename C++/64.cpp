#include<iostream>
#include<vector>
using namespace std;

void imu(vector < int > &v){
    int count=0;
    for (int i=0;i<v.size();i++)
    {
        if (v[i]==0)
        {
            count++;
        }
for (int i=0;i<v.size();i++)
{
    if (i<count)
    {
        v[i]=0;
    }
    else
    {
        v[i]=1;
    }
}
for (int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}

}

int main ()
{
    int n;
    cin>>n;
    vector <int>  v(n);

    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }

        imu(v);

    return 0;

}
