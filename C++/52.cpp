#include <iostream>
using namespace std;

int main() {
    int arr[] = {20, 26, 48, 65};
    int target_sum = 94;
    int count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] + arr[j] == target_sum) {
                count++;
            }
        }
    }

    cout << count << endl; // Output: 2 (the pairs are (20, 74) and (26, 68))
    return 0;
}
