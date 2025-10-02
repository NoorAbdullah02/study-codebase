#include<iostream>
using namespace std;
void print(int x){
    if (x == 0) return;
    cout<<x<<" ";
    print(x-1);
    print(x-1);
}
int main ()
{
    print(3);
 
return 0;
}
//Recersion print n to 1
// #include<iostream>
// using namespace std;
// void print(int x){
//     if (x == 0) return;
//     print(x-1);
//     cout<<x<<" ";
// }
// int main ()
// {
//     print(5);
 
// return 0;
// }