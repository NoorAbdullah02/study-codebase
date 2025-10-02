#include<bits/stdc++.h>
using namespace std;
int main ()
{
 string a,b;
 cin>>a>>b;
 int sum = 0;
 int n = a.size();
 int n1 = b.size();
        for (int i=0;i<n || i<n1;i++){
            if (a[n - i - 1] == '1'){
                sum += pow(2,i);
            }
            if (b[n1 - i - 1] == '1'){
                sum += pow(2,i);
            }
        }
       // cout<<sum<<endl;
        string s;
        while(sum!=0){
            s += to_string(sum % 2);
            sum /=2;
        }
        
        reverse(s.begin(),s.end());
        cout<<s<<endl;
return 0;
}