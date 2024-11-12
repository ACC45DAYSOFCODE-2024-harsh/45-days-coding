#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N, X, Y;
        scanf("%lld %lld %lld", &N, &X, &Y);

        // Vertical and horizontal cells
        long long verticalAndHorizontal = 2 * (N - 1);

        // Diagonal cells
        long long topLeft = min(X - 1, Y - 1);
        long long topRight = min(X - 1, N - Y);
        long long bottomLeft = min(N - X, Y - 1);
        long long bottomRight = min(N - X, N - Y);

        long long diagonal = topLeft + topRight + bottomLeft + bottomRight;

        // Total cells under attack
        long long result = verticalAndHorizontal + diagonal;
        
        printf("%lld\n", result);
    }

    return 0;
}
