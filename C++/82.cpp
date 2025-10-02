#include <iostream>
#include <conio.h>
using namespace std;

void merge(int *arr, int l, int mid, int r) {
    int an = r - mid;
    int bn = mid - l + 1;
    // create two arrays
    int a[an];
    int b[bn];
    for (int i = 0; i < an; i++) {
        a[i] = arr[mid + 1 + i];
    }
    for (int i = 0; i < bn; i++) {
        b[i] = arr[l + i];
    }
    int i = 0, j = 0, k = l;
    while (i < an && j < bn) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }
    while (i < an) {
        arr[k++] = a[i++];
    }
    while (j < bn) {
        arr[k++] = b[j++];
    }
}

void merge_sort(int *arr, int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int arr[] = {20, 36, 4, 5, 9, 7, 2, 48, 2, 58, 4, 78, 25, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int r = n - 1;
    merge_sort(arr, l, r);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    getch();
    return 0;
}
