#include<iostream>

using namespace std;
int main ()
{
    char ch;
    cout<<"Enter A Characture"<<endl;
    cin >>ch;
    switch(ch)
    {
        case 'a':
            case 'A':{
        cout<<ch <<" is Vowel "<<endl;
        break;
        }
        case 'e':
            {
        cout<<"This Character is Vowel "<<ch<<endl;
break;
            }
            case 'i':
                {
                            cout<<"This Character is Vowel "<<ch<<endl;
break;
                }
            case 'o':
                {
                            cout<<"This Character is Vowel "<<ch<<endl;
break;
                }
            case 'u':
                {
                            cout<<"This Character is Vowel "<<ch<<endl;
break;
                }

            default:
                {
                            cout<<"This Character is Consonant "<<ch<<endl;
                            break;

                }
    }
    return 0;

}
