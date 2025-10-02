#include<iostream>
using namespace std;
class A{
    int n;
    public:
    A(long long int a):n(a){
        
       
    }
    void set(){
         long long int m = (n-1)+1;
        long long int serise = m*(2*1+(m-1)*1)/2;
        cout<<serise<<endl;
    }

};
int main (){
    int n;
    cin>>n;
    A a(n);
    a.set();
    return 0;
}