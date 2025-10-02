#include<iostream>
using namespace std;
int main ()
{
 int num;
 cin>>num;
 switch(num){
    case 1:{
        cout<<"The Number is ONE"<<endl;
        break;
    }
    case 2:
    {
        cout<<"The Number is TWO"<<endl;
        break;
    }
    case 3:{
        cout<<"The Number is Three"<<endl;
        break;
    }
    case 0:{
        cout<<"The Number is ZERO"<<endl;
        break;
    }
     case 4:{
        cout<<"The Number is FOUR"<<endl;
        break;
    }
     case 5:{
        cout<<"The Number is FIVE"<<endl;
        break;
    }
     case 6:{
        cout<<"The Number is SIX"<<endl;
        break;
    }
     case 7:{
        cout<<"The Number is SEVEN"<<endl;
        break;
    }
     case 8:{
        cout<<"The Number is EIGHT"<<endl;
        break;
    }
     case 9:{
        cout<<"The Number is NINE"<<endl;
        break;
    }
     case 10:{
        cout<<"The Number is TEN"<<endl;
        break;
    }
    default : {
        cout<<num<<"This is not a number"<<endl;
    }
 }
return 0;
}
