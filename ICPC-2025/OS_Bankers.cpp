#include <stdio.h>
int main() {
    int n = 5, m = 3;
    int i, j, k;
    int allocation[5][3] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1},
        {0, 0, 2}
    };
    int max[5][3] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2},
        {4, 3, 3}
    };
    int avail[3] = {3, 3, 2};
    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) f[k] = 0;
    int need[n][m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - allocation[i][j];
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    ans[ind++] = i;
                    for (j = 0; j < m; j++)
                        avail[j] += allocation[i][j];
                    f[i] = 1;
                }
            }
        }
    }
    int cnt = 1;
    for (i = 0; i < n; i++) {
        if (f[i] == 0) {
            cnt = 0;
            printf("\nSystem is not in a safe state.\n");
            break;
        }
    }
    if (cnt) {
        printf("\nSystem is in a safe state.\nSafe sequence is: ");
        for (i = 0; i < n - 1; i++)
            printf("P%d -> ", ans[i]);
        printf("P%d\n", ans[n - 1]);
    }
    return 0;
}


