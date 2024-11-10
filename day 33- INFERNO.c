#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int H[N];
        int maxHealth = 0;
        int singleTargetTime = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &H[i]);
            maxHealth = max(maxHealth, H[i]);
            singleTargetTime += (H[i] + X - 1) / X; // Equivalent to ceil(H[i] / X)
        }

        // Minimum time is the lesser of single-target and multi-target mode times
        int minTime = (singleTargetTime < maxHealth) ? singleTargetTime : maxHealth;
        printf("%d\n", minTime);
    }

    return 0;
}
