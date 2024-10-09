#include <stdio.h>

int main() {
    int T;
    // Read the number of people observed by Tanu
    scanf("%d", &T);

    while (T--) {
        int N;
        char gestures[1001];  // Maximum length of gestures is 1000

        // Read the number of gestures and the gesture string
        scanf("%d", &N);
        scanf("%s", gestures);

        int isIndian = 0, isNotIndian = 0;

        // Check each gesture
        for (int i = 0; i < N; i++) {
            if (gestures[i] == 'I') {
                isIndian = 1;
                break;  // No need to check further if we find an "I"
            }
            if (gestures[i] == 'Y') {
                isNotIndian = 1;
            }
        }

        // Determine the result
        if (isIndian) {
            printf("INDIAN\n");
        } else if (isNotIndian) {
            printf("NOT INDIAN\n");
        } else {
            printf("NOT SURE\n");
        }
    }

    return 0;
}
