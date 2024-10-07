// Given an array having 0 to n-1 unsorted. Return a new array having their indices

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> indexArray(const vector<int>& arr) {
    int n = arr.size();
    
    // Create a vector of pairs where each pair is (element, index)
    vector<pair<int, int>> elementWithIndex;
    for (int i = 0; i < n; ++i) {
        elementWithIndex.push_back({arr[i], i});
    }
    
    // Sort the vector of pairs based on the element value
    sort(elementWithIndex.begin(), elementWithIndex.end());
    
    // Create a result vector to store the sorted indices
    vector<int> result;
    for (const auto& pair : elementWithIndex) {
        result.push_back(pair.second);  // Store the index of the sorted elements
    }
    
    return result;
}

int main() {
    vector<int> arr = {2, 0, 1};  // Example input
    vector<int> result = indexArray(arr);
    
    // Output the result
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    
    return 0;
}
