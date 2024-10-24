#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Length of the string
        scanf("%d", &N);
        
        char S[101]; // The string, max length is 100
        scanf("%s", S);
        
        int freq[26] = {0};
        
        // Count frequency of each character
        for (int i = 0; i < N; i++) {
            freq[S[i] - 'a']++;
        }
        
        int has_repeated = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 1) {
                has_repeated = 1;
                break;
            }
        }
        
        if (has_repeated) {
            // If there is any repeated character, answer is N - 2
            printf("%d\n", N - 2);
        } else {
            // If no repeated characters, answer is -1
            printf("-1\n");
        }
    }
    
    return 0;
}