//palindrome using bool function in recersion
#include<iostream>
using namespace std;
bool pali(int num,int *temp){
    if (num>=0&&num<=9){
        int last_dight=(*temp)%10;
        (*temp)/=10;
        return (num==last_dight);
    }
    bool result = (pali(num/10,temp)&&(num%10)==((*temp)%10));
    (*temp)/=10;
    return result;
}
int main ()
{
int num;
cin>>num;
int anotherNum=num;
int *temp=&anotherNum;
cout<<pali(num,temp);
    return 0;

}