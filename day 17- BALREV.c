#include <stdio.h>
#include <string.h>

void solve() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;  // Length of the binary string
        scanf("%d", &N);
        
        char A[N+1];  // Input binary string
        scanf("%s", A);
        
        int count_0 = 0, count_1 = 0;
        
        // Count the number of 0's and 1's in the string
        for (int i = 0; i < N; i++) {
            if (A[i] == '0') {
                count_0++;
            } else {
                count_1++;
            }
        }
        
        // Print the smallest possible string by putting all 0's followed by all 1's
        for (int i = 0; i < count_0; i++) {
            printf("0");
        }
        for (int i = 0; i < count_1; i++) {
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}
