// Given a range [l,r]. Find all primes between this range.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Simple Sieve to find all primes up to sqrt(r)
void simpleSieve(int limit, vector<int>& primes) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not primes

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Store all prime numbers up to limit
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
}

// Function to find all primes in the range [l, r]
vector<int> findPrimesInRange(int l, int r) {
    // Step 1: Find all primes up to sqrt(r) using simple sieve
    int limit = sqrt(r);
    vector<int> primes;
    simpleSieve(limit, primes);

    // Step 2: Create a boolean array for the range [l, r]
    vector<bool> isPrime(r - l + 1, true);

    // Step 3: Use primes to mark non-prime numbers in [l, r]
    for (int prime : primes) {
        // Find the first multiple of prime in the range [l, r]
        int base = (l / prime) * prime;
        if (base < l) base += prime;

        // Mark all multiples of prime as non-prime
        for (int i = base; i <= r; i += prime) {
            if (i != prime) { // Do not mark the prime number itself
                isPrime[i - l] = false;
            }
        }
    }

    // Step 4: Collect all primes in the range [l, r]
    vector<int> result;
    for (int i = l; i <= r; ++i) {
        if (isPrime[i - l] && i > 1) {  // i > 1 to exclude 1 from primes
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int l, r;
    cout << "Enter range [l, r]: ";
    cin >> l >> r;

    vector<int> primes = findPrimesInRange(l, r);

    // Output the primes in the range
    cout << "Primes between " << l << " and " << r << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
