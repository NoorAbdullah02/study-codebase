#include <iostream>
#include <list>
using namespace std;
void print(list<int> &l)
{
    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    
}
// void print1(list <int> &k){
//     list<int> :: iterator it;
//     for(it = k.begin(); it != k.end();it++){
//        cout<<*it<< " ";
//     }
// }
int main()
{
    list<int> l;
    //list<int>::iterator i;
    list<int>k;

    int j= 0;// = l.begin();
    while( j<5){
        int a;
        cin>>a;
        l.push_back(a);
        j++;
    }
    // l.push_back(4);
    // l.push_back(6);
    // l.push_back(8);
    int i=0;
    while(i<5){
        int a;
        cin>>a;
        k.push_back(a);
        i++;
    }
    
    l.merge(k);
    l.sort();
    print(l);
    l.reverse();
    print(l);
    //print1(k);

    return 0;
}