#include<iostream>
#include<cstring>
#include<map>
using namespace std ;
int main ()
{
    map < string , int > mapS;
    mapS["Abdullah"] = 10;
    mapS["Sazid"] = 15;
    mapS["Shawon"] = 06;

     
    map<string,int> :: iterator it;
    for (it = mapS.begin();it != mapS.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    return 0;
}