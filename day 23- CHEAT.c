#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int weeks = N / 7;
        int remaining_days = N % 7;

        // Calculate the number of Tuesdays
        int tuesdays = weeks + (remaining_days >= 2 ? 1 : 0);

        printf("%d\n", tuesdays);
    }

    return 0;
}


