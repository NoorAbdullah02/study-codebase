#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the values of i and n: ");
    scanf("%d %d", &i, &n);

    int sum = 0;
    for (int j = 0; j <= n-i; j++) {
        sum += i + j;
    }

    printf("The sum of the series is: %d", sum);
    return 0;
}
