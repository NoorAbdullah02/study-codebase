#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void swap(vector <int> &v)
{
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while (left_ptr<right_ptr)
    {
        if (v[left_ptr]%2!=0 && v[right_ptr]%2==0)
        {
       swap(v[left_ptr],v[right_ptr]);
       v[left_ptr++];
       v[right_ptr--];
        }
     if (v[left_ptr]%2==0)
     {
        v[left_ptr++];
     }
     if (v[right_ptr]%2!=0)
     {
        v[right_ptr--];
     }
    }
}
int main ()
{
    cout<<"Enter The Number if N"<<endl;
    int n;
    cin>>n;

vector <int> v;
for (int i=0;i<n;i++)
{
    int element ;
    cin>>element;
    v.push_back(element);
}
swap(v);
for (int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
getch();
}