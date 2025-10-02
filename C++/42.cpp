#include<iostream>
using namespace std;
int main ()
{
    int arr[20];
    int i,count=0,ans=-1;
    for (i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    //int max=arr[0];
    for (int i=0;i<5;i++)
    {
if (arr[i]==11)
{
ans=i;
}

    }
    cout<<ans;

    /*if (count==1)
    {
        cout<<"11 is found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }*/
    //cout<<max<<endl;
    return 0;

}
