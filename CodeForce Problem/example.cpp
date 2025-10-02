#include<iostream>
using namespace std;
int main (){
    float p,c,m;
    cout<<"Enter Marks of Three Subjects : ";
    cin>>p>>c>>m;
    float total = p+c+m;
    float avg = total / 3.0;
    int minNumber = 50;
    if (p>=minNumber && c>= minNumber && m>= minNumber && avg >= 60){
        cout<<"Eligible for Admission"<<endl;
    }
    else {
        cout<<"Not Eligible for Admission"<<endl;
    }
    return 0;
}