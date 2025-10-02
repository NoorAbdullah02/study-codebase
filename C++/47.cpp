#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    vector <int > v(n);
    int i=0;
    while(i<n)
    {
        cin>>v[i];
        i++;

    }
    cout<<"Enter Last Number"<<endl;
    int last;
    cin>>last;
    int m=420;
    i=0;
    while(i<n)
    {
        if (v[i]==last)
        {
            m=i;
        }
        i++;
    }
    cout<<"Last number is "<<m<<endl;
cout<<endl<<endl<<endl;
     i=n-1;
     while(i>=0)
     {
         if (v[i]==last)
         {
             m=i;
             break;
         }
     }
     cout<<"Last is "<<m<<endl;

        return 0;

}
