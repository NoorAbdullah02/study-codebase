#include<iostream>
#include<vector>
using namespace std;
swap(vector <int> &v)
{
   int count=0;
   for (int i=0;i<v.size();i++)
   {
       if (v[i]==0)
       {
           count++;
       }
   }
   int left_ptr=0;
   int right_ptr=v.size()-1;
   while (left_ptr<right_ptr)
   {
       if(v[left_ptr]==1&&v[right_ptr]==0)
       {
           v[left_ptr++]=0;
           v[right_ptr--]=1;
       }
       if (v[left_ptr]==0){
        v[left_ptr++];
       }
       if (v[right_ptr]==1)
       {
           v[right_ptr--];
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
    vector <int> v(n);
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    swap(v);

    return 0;

}
