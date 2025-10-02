#include <iostream>
using namespace std;
int main() {
   int n;cin>>n;
   int arr[n][n];
   for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){
           cin>>arr[i][j];
       }
   }
   int index_i =0;int index_j=0;
   for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){
          if(arr[i][j] == 1){
              index_i = i;
              index_j = j;
          }
       }
   }
   cout<<index_j<<index_i<<endl;
//   cout<<(index_j-index_i)<<endl;

    return 0;
}