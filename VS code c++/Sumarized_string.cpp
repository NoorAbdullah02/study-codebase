#include<iostream>
#include<string>
#include<vector>
using namespace std;
string sumarize(string str){
  vector<int>freq(26);
  //storeing frequency of every character
  for (int i=0;i<str.size();i++){
    int index = str[i]-'a';
       freq[index]++;
  }
  int j=0;
  for (int i=0;i<26;i++){
    while(freq[i]){
        str[j++] = i + 'a';
        freq[i]--;
    }
  }
  return str;
}
int main (){
    string name;
    getline(cin,name);
    cout<<sumarize(name);
    return 0;

}
