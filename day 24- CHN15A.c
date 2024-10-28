#include <stdio.h>

int count_wolverine_minions(int N, int K, int characteristics[]) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        int new_value = characteristics[i] + K;
        if (new_value % 7 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int characteristics[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &characteristics[i]);
        }

        int result = count_wolverine_minions(N, K, characteristics);
        printf("%d\n", result);
    }

    return 0;
}