#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 100000

// Sieve of Eratosthenes to find all primes up to sqrt(n)
void simpleSieve(int limit, bool prime[]) {
    for (int i = 0; i <= limit; i++) {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                prime[i] = false;
            }
        }
    }
}

// Function to generate all primes between m and n using segmented sieve
void segmentedSieve(long long m, long long n) {
    int limit = sqrt(n) + 1;
    bool prime[limit + 1];
    simpleSieve(limit, prime);

    // Array for marking primes in the range [m, n]
    bool isPrimeRange[n - m + 1];
    for (int i = 0; i <= n - m; i++) {
        isPrimeRange[i] = true;
    }

    // Use found primes to mark non-primes in range [m, n]
    for (int p = 2; p <= limit; p++) {
        if (prime[p]) {
            // Find the smallest multiple of p in the range [m, n]
            long long start = (m / p) * p;
            if (start < m) start += p;
            if (start == p) start += p; // Skip the prime itself
            
            for (long long j = start; j <= n; j += p) {
                isPrimeRange[j - m] = false;
            }
        }
    }

    // Print all primes in the range [m, n]
    for (long long i = 0; i <= n - m; i++) {
        if (isPrimeRange[i] && (i + m) > 1) { // Exclude 1 from primes
            printf("%lld\n", i + m);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long m, n;
        scanf("%lld %lld", &m, &n);
        segmentedSieve(m, n);
        if (t) printf("\n"); // Separate output for each test case with a blank line
    }

    return 0;
}
