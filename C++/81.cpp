#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void lexiko(char fruit[][60], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_ele = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(fruit[min_ele], fruit[j]) > 0) {
                min_ele = j;
            }
        }
        if (min_ele != i) {
            swap(fruit[i], fruit[min_ele]);
        }
    }
}

int main() {
    char fruit[][60] = {"papaya", "limi", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);
    lexiko(fruit, n);
    for (int i = 0; i < n; i++) {
        cout << fruit[i] << " ";
    }
    getch();
    return 0;
}
