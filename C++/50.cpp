#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    int i=0;
    while(i<6)
    {
        cin>>v[i];
        i++;
    }

    i=0;
    int Esum=0,Osum=0;
    while(i<6)
    {
        Esum+=v[i];
        i=i+2;
    }
     i=1;
    while(i<6){

    Osum+=v[i];
    i=i+2;
}
int diff= Esum-Osum;
cout<<"Difference is = "<<diff<<endl;
return 0;

}
