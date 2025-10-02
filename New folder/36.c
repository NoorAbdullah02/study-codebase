#include <stdio.h>

int main() {
    int i, n, sum;

    printf("Enter the first number (i): ");
    scanf("%d", &i);

    printf("Enter the last number (n): ");
    scanf("%d", &n);

    sum = (n + i) * (n - i + 1) / 2;

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
