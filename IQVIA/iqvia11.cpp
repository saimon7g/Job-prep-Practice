#include <iostream>
#include <vector>
using namespace std;

// Recursive function with memoization to find the maximum amount of money that can be robbed
int robRec(vector<int>& nums, int i, vector<int>& memo) {
    // Base case
    if (i < 0) return 0;

    // Check if already computed
    if (memo[i] != -1) return memo[i];

    // Recursive case: Max of either skipping the current house or robbing it
    memo[i] = max(robRec(nums, i - 1, memo), nums[i] + robRec(nums, i - 2, memo));
    
    return memo[i];
}

int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> memo(n, -1);  // Memoization array initialized to -1
    return robRec(nums, n - 1, memo);
}

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};  // Example input
    cout << "Maximum amount of money that can be robbed: " << rob(nums) << endl;
    return 0;
}
