//Question 2: Write a program to find the maximum of two integers and two characters using function overloading.
#include<iostream>
using namespace std;
class Maximum{
    public:
    int maxele(int a,int b){
        return max(a,b);
    }
    char maxele(char a,char b){
        return max(a,b);
    }
};
int main ()
{
 Maximum m;
    cout << "Max of integers: " << m.maxele(10, 20) << endl;
    cout << "Max of chars: " << m.maxele('A', 'B') << endl;
return 0;
}