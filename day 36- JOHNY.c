#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;  
    scanf("%d", &T);
    
    while (T--) {
        int N, K;
        scanf("%d", &N);  
        int playlist[N];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &playlist[i]);  
        }
        
        scanf("%d", &K);  
        
        int uncle_johny_length = playlist[K-1];  
        
        
        qsort(playlist, N, sizeof(int), compare);
        
        
        for (int i = 0; i < N; i++) {
            if (playlist[i] == uncle_johny_length) {
                printf("%d\n", i + 1);  
                break;
            }
        }
    }
    
    return 0;
}
