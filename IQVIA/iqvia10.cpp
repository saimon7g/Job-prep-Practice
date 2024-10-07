#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find the minimum cost to buy exactly n apples
int minCostToBuyApples(int n, int L1, int P1, int L2, int P2) {
    // Initialize dp array where dp[i] represents minimum cost to buy i apples
    vector<int> dp(n + 1, INT_MAX);

    // Base case: Cost to buy 0 apples is 0
    dp[0] = 0;

    // Fill the dp array for all values from 1 to n
    for (int i = 1; i <= n; ++i) {
        // If we can buy L1 apples from shop 1
        if (i >= L1) {
            dp[i] = min(dp[i], dp[i - L1] + P1);
        }
        // If we can buy L2 apples from shop 2
        if (i >= L2) {
            dp[i] = min(dp[i], dp[i - L2] + P2);
        }
    }

    // If dp[n] is still INT_MAX, it means it's impossible to buy exactly n apples
    if (dp[n] == INT_MAX) {
        return -1;  // Impossible to buy exactly n apples
    }

    return dp[n];  // Return the minimum cost to buy n apples
}

int main() {
    int n, L1, P1, L2, P2;
    cout << "Enter the number of apples you need (n): ";
    cin >> n;
    cout << "Enter lot size and price for Shop 1 (L1 P1): ";
    cin >> L1 >> P1;
    cout << "Enter lot size and price for Shop 2 (L2 P2): ";
    cin >> L2 >> P2;

    int result = minCostToBuyApples(n, L1, P1, L2, P2);
    if (result == -1) {
        cout << "It is impossible to buy exactly " << n << " apples." << endl;
    } else {
        cout << "The minimum cost to buy exactly " << n << " apples is: " << result << endl;
    }

    return 0;
}
