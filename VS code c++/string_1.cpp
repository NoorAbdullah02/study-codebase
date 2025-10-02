#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool gram(string str,string str2){
    vector<int>freq(26);
    if (str.size()!=str2.size()){
        return false;
    }
    for (int i=0;i<str.size();i++){
       freq[str[i]-'a']++;
       freq[str2 [i] -'a']--;
    }
  
    
  for (int i = 0;i<26;i++){
    if (freq[i]!=0){
        return false;
    }
  }
  return true;
    
}
int main (){
    string name;
    string name1;
    getline(cin,name);
    getline(cin,name1);
    int a = gram(name,name1);
    if (a==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;;
    }
    return 0;

}