#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Braket{
    string s;
    stack<char> st;
    public:
Braket(string s){
    this -> s = s;
}
bool check(){
for (int i=0;i<s.size();i++){
    if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
        st.push(s[i]);
    }
    else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
        if (st.empty())return false;
        st.pop();
    }
}
return (st.empty())?  true : false;
}
};
int main ()
{
 string s = "((((((((({{{{{{{{{{[[[[[]]]]]}}}}}}}}}})))))))))";
 Braket b (s);
 if (b.check())cout<<"Right"<<endl;
 else cout<<"NO"<<endl;

return 0;
}