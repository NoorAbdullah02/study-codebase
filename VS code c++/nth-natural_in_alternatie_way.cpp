#include<iostream>
using namespace std;
int alter(int x){
    if (x==0){
        return 0;
    }
    if (x%2==0){
        return alter(x-1)-x;
    }
    else{
        return alter(x-1)+x;
    }
}

int main()
{
    int x;
    cin>>x;
    cout<<alter(x);
    return 0;

}