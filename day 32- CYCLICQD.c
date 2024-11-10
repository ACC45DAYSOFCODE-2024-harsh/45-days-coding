#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);

        // Check if the sum of opposite angles is 180 for both pairs
        if ((A + C == 180) && (B + D == 180)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
