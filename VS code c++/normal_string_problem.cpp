//Usiing recertion remove S character
#include<iostream>
#include<string>
using namespace std;
string s(string a,int idx,int n)
{
    if (idx==n)
    {
        return " ";
    }
    string imu;
    imu=a[idx];
    if (a[idx]=='A'){
        return s(a,idx+1,n);
    }
    else{
        return imu+s(a,idx+1,n);
    }
}
int main ()
{
 string a="ANAoAAoArA";
 cout<<s(a,0,a.size());
return 0;
}