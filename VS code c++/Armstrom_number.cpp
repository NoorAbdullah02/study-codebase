#include <iostream>
using namespace std;

bool found(int *arr, int n, int idx, int x) {
    if (idx == n) {
        return false; // Element not found
    }
    return (arr[idx] == x) || found(arr, n, idx + 1, x);
}

int main() {
   //  int arr[6] = {10, 20, 60, 80, 40, 90};
   //  int x = 40;
   //  int n = 6;
   //  int *ptr = &arr[0];
   //  bool result = found(ptr, n, 0, x);
   //  if (result) {
   //      cout << "Present" << endl;
   //  } else {
   //      cout << "Not Present" << endl;
   //  }
   // string str = "abc"; 
   // int idx=0;
   //     int digit=str[idx]-'0';
   //     cout<<digit;

    return 0;
}