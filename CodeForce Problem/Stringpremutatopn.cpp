#include<iostream>
using namespace std;
void perm (char arr[],int k){
    static int a[10] = {0};
    static char res[10];
    int i;
    if (arr[k] == '\0'){
        res[k] = '\0';
        cout<<res<<endl;
    }
    else{
        for (int i=0;arr[i]!='\0';i++){
            if (a[i] == 0){
                res[k] = arr[i];
                a[i] = 1;
                perm(arr,k+1);
                a[i] = 0;
            }
        }
    }
}
int main (){
    char arr[] = "ABC";
    perm(arr,0);
    return 0;
} 