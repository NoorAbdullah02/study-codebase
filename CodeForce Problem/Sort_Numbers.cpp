#include<bits/stdc++.h>
using namespace std;
void f(string &s,int n){
    int *s1 = new int [127]();
    for (int i=0;i<n;i++){
        s1[s[i]]++;
    } 
    int i = 0 ,j = 0;
    while(i<127){
        if (s1[i]>0){
            s[j++] = (char) (i);
            s1[i]--;
        }
        else{
            i++;
        }
    }
}
int main ()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    f(str,str.size());
    cout<<str<<endl;
    return 0;
}