#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int XA, XB, XC;
        scanf("%d %d %d", &XA, &XB, &XC);
        
        // Check for clear majority
        if (XA > 50) {
            printf("A\n");
        } else if (XB > 50) {
            printf("B\n");
        } else if (XC > 50) {
            printf("C\n");
        } else {
            printf("NOTA\n");
        }
    }
    
    return 0;
}
