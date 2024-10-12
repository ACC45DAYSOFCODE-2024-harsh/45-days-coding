#include <stdio.h>

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;
        
        // Read the number of animals
        scanf("%d", &N);
        
        int frequency[101] = {0}; // Frequency array for animal types (1 to 100)
        
        // Read the animals and count their frequencies
        for (int i = 0; i < N; i++) {
            int animal;
            scanf("%d", &animal);
            frequency[animal]++;
        }
        
        // Check if all animal counts are even
        int possible = 1;  // Assume it is possible
        for (int i = 1; i <= 100; i++) {
            if (frequency[i] % 2 != 0) {
                possible = 0;  // If any count is odd, it's not possible
                break;
            }
        }
        
        // Output the result for this test case
        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
