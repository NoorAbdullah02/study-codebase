#include<iostream>
#include<vector>
using namespace std;

/*void imu(vector<int>&v)
{

}*/

int main ()
{
    int n;
    cin>>n;

    vector <int > v(n);
    for (int i=0;i<n;i++)
    {
       /*int element;
       cin>>element;
       v.push_back(element);*/
       cin>>v[i];

    }
    int count=0;
    for (int i=0;i<v.size();i++)
    {
        if (v[i]==0)
        {
            count++;
        }
    }
    //imu(v);
for (int i=0;i<v.size();i++){
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

    return 0;

}
