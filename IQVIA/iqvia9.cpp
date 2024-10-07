// Given jtwo binary string A,B.
//  Find the minimum number of bit flips to change string A to string B.

#include <iostream>
#include <string>
using namespace std;

int minBitFlips(string A, string B) {
    // Ensure both strings are of the same length
    int n = A.size();
    int flips = 0;

    // Iterate through both strings and count differing bits
    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            flips++;  // Increment flip count when bits differ
        }
    }

    return flips;
}

int main() {
    string A, B;
    cout << "Enter binary string A: ";
    cin >> A;
    cout << "Enter binary string B: ";
    cin >> B;

    if (A.size() != B.size()) {
        cout << "Strings must be of the same length." << endl;
        return 1;
    }

    int result = minBitFlips(A, B);
    cout << "Minimum number of bit flips: " << result << endl;

    return 0;
}
