#include<iostream>
#include<string>
using namespace std;
void change(string str,char ch,int *first,int *last)
{
 //   char ch;

    for (int i=0;i<str.size();i++)
    {
      if (str[i]==ch)
      {
           *first=i;
           break;
      }
    }
    for (int i=str.size();i>=0;i--)
    {
      if (str[i]==ch)
      {
           *last=i;
           break;
      }
    }
}
int main ()
{
    int first=0;
    int last=0;
    string name;
    cin>>name;
    char ch='A';
    int *p1=&first;
    int *p2=&last;
    change(name,ch,p1,p2);

   cout<<"Answer is "<<" "<<first<<" "<<last<<endl;
    return 0;

}