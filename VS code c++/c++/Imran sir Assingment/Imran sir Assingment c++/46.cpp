//Write C++ program to print number in words
#include<iostream>
using namespace std;
int main ()
{
 int num, rev = 0,rem = 0;
 cout<<"Enter A Number : ";
 cin>>num;
while(num!=0){
    rem = num % 10;
    rev = rev*10 + rem;
    num /= 10;
}
while(rev!=0){
    switch(rev%10){
        case 1:{
            cout<<"ONE"<<endl;
            break;
        }
         case 2:{
            cout<<"TWO"<<endl;
            break;
        }
         case 3:{
            cout<<"THREE"<<endl;
            break;
        }
         case 4:{
            cout<<"FOUR"<<endl;
            break;
        }
         case 5:{
            cout<<"FIVE"<<endl;
            break;
        }
         case 6:{
            cout<<"SIX"<<endl;
            break;
        }
         case 7:{
            cout<<"SEVEN"<<endl;
            break;
        }
        case 8:{
            cout<<"EIGHT"<<endl;
            break;
        }
         case 9:{
            cout<<"NINE"<<endl;
            break;
        }
        default :{
            cout<<"Invalid Number"<<endl;
            break;
        }
    }rev /= 10;

}
return 0;
}