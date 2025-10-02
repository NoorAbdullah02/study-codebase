//Write C++ program to print number of days in a month using switch case
#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter Number : (1-12) : ";
    cin>>num;
    switch(num){
        case 1:{
            cout<<"31 Days"<<endl;
            break;
        }
        case 2:{
            cout<<"28 or 29 Days"<<endl;
            break;
        }
        case 3:{
            cout<<"31 Days"<<endl;
            break;
        }
        case 4:{
            cout<<"30 Days"<<endl;
            break;
        }
        case 5:{
            cout<<"31 Days"<<endl;
            break;
        }
        case 6:{
            cout<<"30 Days"<<endl;
            break;
        }
        case 7:{
            cout<<"31 Days"<<endl;
            break;
        }
        case 8:{
            cout<<"31 Days"<<endl;
            break;
        }
        case 9:{
            cout<<"30 Days"<<endl;
            break;
        }
        case 10:{
            cout<<"31 Days"<<endl;
            break;
        }
        case 11:{
            cout<<"30 Days"<<endl;
            break;
        }
        case 12:{
            cout<<"31 Days"<<endl;
            break;
        }
     default :
     {
        cout<<"Error ! Enter a Valid Number Between (1 - 12)"<<endl;
     }
    }
    return 0;
}