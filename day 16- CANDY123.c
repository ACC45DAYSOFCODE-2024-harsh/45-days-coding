#include <stdio.h>

void solve() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);  // Maximum candies Limak and Bob can eat
        
        int turn = 1;  // Turn counter: odd -> Limak, even -> Bob
        
        while (1) {
            if (turn % 2 == 1) {  // Limak's turn (odd turn)
                if (A >= turn) {
                    A -= turn;
                } else {
                    printf("Bob\n");
                    break;
                }
            } else {  // Bob's turn (even turn)
                if (B >= turn) {
                    B -= turn;
                } else {
                    printf("Limak\n");
                    break;
                }
            }
            turn++;  // Move to the next turn
        }
    }
}

int main() {
    solve();
    return 0;
}


