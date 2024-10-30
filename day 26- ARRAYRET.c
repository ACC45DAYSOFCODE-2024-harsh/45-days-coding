#include <stdio.h>

void retrieve_array(int T) {
    while (T--) {
        int N;
        scanf("%d", &N);
        long long B[N], total_sum_B = 0;

        // Read array B and calculate the total sum of B
        for (int i = 0; i < N; i++) {
            scanf("%lld", &B[i]);
            total_sum_B += B[i];
        }

        // Calculate the total sum S
        long long S = total_sum_B / (N + 1);

        // Calculate and print array A
        for (int i = 0; i < N; i++) {
            long long A_i = B[i] - S;
            printf("%lld ", A_i);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    retrieve_array(T);
    return 0;
}


