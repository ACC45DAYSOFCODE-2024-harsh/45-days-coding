#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        long long K;
        scanf("%d %lld", &N, &K);

        for (int i = 0; i < N; i++) {
            long long D;
            scanf("%lld", &D);

            // Check if D is divisible by K
            if (D % K == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
