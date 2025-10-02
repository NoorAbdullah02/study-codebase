#include<iostream>
#include<set>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    set<string> st;
    for (int i = 0;i<n;i++){
    string a;
    getline(cin,a);
    st.insert(a);
    }
    set<string> :: iterator it;
    for (it = st.begin();it!=st.end();it++ ){
        cout<<*it<<endl;
    }

 
return 0;
}