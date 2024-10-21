#include <stdio.h>

#define MAX_N 100000

int freq[MAX_N + 1]; // Frequency array to store group preferences

void solve() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Number of people

        // Reset frequency array for each test case
        for (int i = 0; i <= N; i++) {
            freq[i] = 0;
        }

        // Read group size preferences and populate the frequency array
        for (int i = 0; i < N; i++) {
            int P;
            scanf("%d", &P);
            freq[P]++;
        }

        int possible = 1; // Assume possible until proven otherwise

        // Check if the frequencies are divisible by group size
        for (int i = 1; i <= N; i++) {
            if (freq[i] % i != 0) {
                possible = 0;
                break;
            }
        }

        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    solve();
    return 0;
}
