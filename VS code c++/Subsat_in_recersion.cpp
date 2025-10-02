#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;
void Subsat (string str, int idx,vector<string> &v,string result){
  if(idx==str.length()){
   v.push_back(result);
   return;
  }
   Subsat(str,idx+1,v,result+str[idx]);
   Subsat(str,idx+1,v,result); 


}
int main ()
{
 string s="ABCf";
 vector<string>V;
 string result="";
 Subsat(s,0,V,result);
 for (int i=0;i<V.size();i++){
    cout<<V[i]<<" ";
 }


getch ();
}