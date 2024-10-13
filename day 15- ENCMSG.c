#include <stdio.h>
#include <string.h>

void encodeMessage(char S[], int N) {
    // Step 1: Swap adjacent characters
    for (int i = 0; i + 1 < N; i += 2) {
        // Swap characters at position i and i+1
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }
    
    // Step 2: Substitute each character
    for (int i = 0; i < N; i++) {
        // Replace character with its "reverse" in the alphabet
        S[i] = 'a' + ('z' - S[i]);
    }
    
    // Output the encoded message
    printf("%s\n", S);
}

int main() {
    int T;
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;
        char S[101];
        
        // Read the length of the string and the string itself
        scanf("%d", &N);
        scanf("%s", S);
        
        // Encode the message
        encodeMessage(S, N);
    }
    
    return 0;
}


