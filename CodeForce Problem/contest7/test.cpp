#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
 ofstream t("_1st.txt", ios::app);
 for (int i=0;i<10;i++){
    t<<i<<" ";
 }cout<<endl;
 t<<"Good Bye"<<endl;
 t.close();

return 0;
}