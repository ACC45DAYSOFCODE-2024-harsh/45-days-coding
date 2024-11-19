#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000


typedef struct {
    int value;
    int count;
} Frequency;

int compare(const void *a, const void *b) {
    return ((Frequency *)b)->count - ((Frequency *)a)->count;  
}

int main() {
    int T;  
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        
        Frequency freq[MAX_N + 1];  

        for (int i = 0; i <= MAX_N; i++) {
            freq[i].value = i;
            freq[i].count = 0;
        }


        for (int i = 0; i < N; i++) {
            freq[A[i]].count++;
        }


        int max_freq = 0;
        for (int i = 1; i <= N; i++) {
            if (freq[i].count > max_freq) {
                max_freq = freq[i].count;
            }
        }

        
        printf("%d\n", N - max_freq);
    }

    return 0;
}
