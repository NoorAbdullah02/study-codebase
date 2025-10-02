#include<iostream>
#include<vector>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 vector<int> v(n);
 int police = 0;
 int count = 0;
 int crime = 0;
 for (int i=0;i<n;i++){
    cin>>v[i];
    
    if (v[i] == -1){
        if(police > 0) // if police available
        {
            police--;
        }
        else
        {
            crime++;
        }
        
        
    }
    
    else {
        police+= v[i];
    }
 }
 cout<<crime<<endl;
return 0;
}
/*
8 1 -1 1 -1 -1 1 1 1
*/