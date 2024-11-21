#include <stdio.h>
#include <string.h>

// Function to encode the binary string into DNA sequence
void encode_dna(int T) {
    // Variables to hold the binary string and its length
    int N;
    char S[1001];  // Assuming the maximum length for N is 1000 as per the problem's constraints
    
    // DNA encoding mappings based on binary pairs
    char mapping[4] = {'A', 'T', 'C', 'G'};
    
    for (int i = 0; i < T; i++) {
        // Read length of binary string (although it's not really needed for encoding logic)
        scanf("%d", &N);
        // Read the binary string
        scanf("%s", S);
        
        // Iterate over the string in steps of 2
        for (int j = 0; j < N; j += 2) {
            // Determine the binary pair
            if (S[j] == '0' && S[j+1] == '0') {
                printf("A");
            } else if (S[j] == '0' && S[j+1] == '1') {
                printf("T");
            } else if (S[j] == '1' && S[j+1] == '0') {
                printf("C");
            } else if (S[j] == '1' && S[j+1] == '1') {
                printf("G");
            }
        }
        printf("\n");  // Print a newline after each test case result
    }
}

int main() {
    int T;
    
    // Read number of test cases
    scanf("%d", &T);
    
    // Call the function to encode each test case
    encode_dna(T);
    
    return 0;
}
