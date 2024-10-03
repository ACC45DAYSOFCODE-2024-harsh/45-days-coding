#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X; // N: number of events, X: initial number of people
        scanf("%d %d", &N, &X);
        
        int current_people = X; // Current number of people in the room
        int max_people = X;     // Maximum number of people at any moment
        
        for (int i = 0; i < N; i++) {
            int Ai; // Event value
            scanf("%d", &Ai);
            
            current_people += Ai; // Update current number of people
            
            if (current_people > max_people) {
                max_people = current_people; // Update max if current exceeds
            }
        }
        
        printf("%d\n", max_people); // Print the maximum number of people
    }
    
    return 0;
}
