#include<iostream>
#include<string>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   for (int i=0;i<n;i++){
      char a;
      cin>>a;
      s.push_back(a);
   }
   cout<<s.size()<<endl;
   int score = 0;
   int i = 0;
   //cout<<s.size()<<endl;
   while(i<s.size()){
    char current = s[i];
    switch (current){
      case 'V' : {score += 5;
      i++;
      break;
      }
      case 'W' : {score += 2;
      i++;
      break;
      }
      case 'X' : {
        s.erase(s.begin()+(i+1));
        //i++;
        break;
      }
      case 'Y':{
         char str = s[i+1];
         s.erase(s.begin()+(i+1));
         //int len = s.size();
         s.push_back(str);
         i++;
         break;
      }
      case 'Z' :
      {
         if (i+1<s.size()){
         if (s[i+1] == 'V'){
            score /=5; 
            s.erase(s.begin()+(i+1));
         }
         if (s[i+1] == 'W'){
            score /= 2;
            s.erase(s.begin()+(i+1));
         }
         }
          i++;
          break;
      }
      default :{
         i++;
      }
    }
   }

   cout<<score<<endl;
   return 0;
}