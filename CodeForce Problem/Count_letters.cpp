#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int n = s.size();
    set <char> s1;
    int count[26];
    sort(s.begin(),s.end());
    for (int i=0;i<n;i++){
        if (s[i] >= 'a' &&  s[i]<= 'z'){
            count[i]++;
            s1.insert(s[i]);
        }
    }
    set<char> iterator :: it;
    
    
    }
    return 0;
}