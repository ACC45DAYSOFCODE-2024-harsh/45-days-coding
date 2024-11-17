#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read the number of enemies and the damage in single-target mode
        
        int healths[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &healths[i]);  // Read the health of each enemy
        }
        
        // Calculate the time for Single-Target Mode
        int time_single_target = 0;
        for (int i = 0; i < N; i++) {
            time_single_target += (int) ceil((double) healths[i] / X);  // Sum the time for each enemy
        }
        
        // Calculate the time for Multi-Target Mode
        int time_multi_target = 0;
        for (int i = 0; i < N; i++) {
            if (healths[i] > time_multi_target) {
                time_multi_target = healths[i];  // Find the maximum health
            }
        }
        
        // Output the minimum time required to kill all enemies
        printf("%d\n", time_single_target < time_multi_target ? time_single_target : time_multi_target);
    }

    return 0;
}
