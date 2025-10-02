#include<iostream>
#include<vector>
using namespace std;
class A{
    public:
    A(){
       vector< long long int> v(3);
       for (int i=0;i<3;i++){
        cin>>v[i];
       }
       int small=v[0];
       int large=v[0];
       for (long long int i=0;i<3;i++){
        if (v[i]>large){
            large = v[i];
        }
        //small = v[0];
        if (v[i]<small){
           small = v[i];
        }
       }
       cout<<small<<" "<<large<<endl;
    }

};
int main ()
{
    A a;
 
return 0;
}