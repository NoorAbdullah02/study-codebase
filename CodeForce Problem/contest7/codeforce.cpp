#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
    if(b == 0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main ()
{
 int n;
 cin>>n;
 while (n--){
    int a,b;
    cin>>a>>b;
    int result = lcm(a,b);
    vector<int> results;
    results.push_back(result);
    for (auto it : results){
        cout<<it<<endl;
    }
 }
return 0;
}