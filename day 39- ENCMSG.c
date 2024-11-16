#include <stdio.h>
#include <string.h>

void encode_message(int N, char S[]) {
    // Step 1: Swap adjacent characters
    for (int i = 0; i < N - 1; i += 2) {
        char temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
    }

    // Step 2: Replace each character with its "opposite" in the alphabet
    for (int i = 0; i < N; i++) {
        S[i] = 'a' + 'z' - S[i];  // 219 is the sum of ASCII values of 'a' and 'z'
    }

    // Print the encoded message
    printf("%s\n", S);
}

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read the length of the string
        char S[N + 1];  // Create a buffer to hold the string (N + 1 for null terminator)
        scanf("%s", S);  // Read the string

        encode_message(N, S);  // Process and print the encoded message
    }

    return 0;
}


