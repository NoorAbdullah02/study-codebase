#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string count_sort(string str){
    vector<int> freq(26);
    for (int i = 0;i<str.size();i++){
     int index = str[i]  - 'a';
     freq[index]++;
     
    }
    int j=0;
    for (int i=0;i<26;i++){
        while(freq[i]--){
            str[j] = i + 'a';
            j++;
        }
    }
    return str;
}
int main ()
{
string name;
cin>>name;
cout<<count_sort(name);

    return 0;
}