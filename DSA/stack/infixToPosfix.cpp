#include<bits/stdc++.h>
using namespace std;
class check{
    string posfix;
    stack<char>ans;
    char *infix;
    public:
    void convert(char infix){
    int i = 0,j = 0;
    while(infix!='/0'){
        if (operand(infix)){
            posfix[j++] = infix++;
        }
        else{
            ans.push(infix);
        }
        if (ans.pop()<infix){
            
        }
    }
}
};
bool operand(char infix){
        if (infix == '+' || infix == '-' || infix =='*' || infix == '/'){
            return false;
        }
        else {
            return true;
        }
    }
int pre(char infix){
        if (infix == '+' || infix == '-'){
            return 1;
        }
        else if (infix == '*' || infix == '/'){
            return 2;
        }
        else return 0;
    }


int main ()
{
    return 0;
}