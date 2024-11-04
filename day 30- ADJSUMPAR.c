#include <stdio.h>

const char* can_form_array(int N, int B[]) {
    int A[N];
    
    // Try assuming A[0] = 0
    A[0] = 0;
    for (int i = 1; i < N; i++) {
        A[i] = (B[i - 1] - A[i - 1]) % 2;
        if (A[i] < 0) A[i] += 2;  // Ensure it's within {0, 1}
    }
    if ((A[N - 1] + A[0]) % 2 == B[N - 1]) {
        return "YES";
    }

    // Try assuming A[0] = 1
    A[0] = 1;
    for (int i = 1; i < N; i++) {
        A[i] = (B[i - 1] - A[i - 1]) % 2;
        if (A[i] < 0) A[i] += 2;  // Ensure it's within {0, 1}
    }
    if ((A[N - 1] + A[0]) % 2 == B[N - 1]) {
        return "YES";
    }

    return "NO";
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int B[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }
        printf("%s\n", can_form_array(N, B));
    }
    return 0;
}
