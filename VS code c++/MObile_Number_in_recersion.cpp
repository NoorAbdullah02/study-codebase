//mobile Number Recersion//
#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;
void mobile(string str,int idx,string result,vector<string>&V,vector<string>&v1)
{
    if (idx==str.size()){
        V.push_back(result);
        return ;
    }
    int digit=str[idx]-'0';
    for (int j=0;j<v1[digit].size();j++){
        mobile(str,idx+1,result+v1[digit][j],V,v1);
    }

}

int main ()
{
 string str="32";
 vector<string>v(10);
 v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  vector<string>v1;
  mobile(str,0,"",v1,v);
  for (int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
  }

getch ();
}