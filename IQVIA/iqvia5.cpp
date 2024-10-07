// Sort array elements by their frequency and 
// in case of tie, keep the order they arrive in the original array.

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// Function to sort the array by frequency and maintain original order for ties
void sortByFrequency(int arr[], int n) {
    // Map to store the frequency of elements
    unordered_map<int, int> freq;
    
    // Vector to store elements and maintain the original order
    vector<pair<int, int>> elements;
    
    // Step 1: Count frequency of each element
    for (int i = 0; i < n; ++i) {
        if (freq[arr[i]] == 0) {
            elements.push_back({arr[i], i});  // Store element and its first appearance index
        }
        freq[arr[i]]++;
    }
    
    // Step 2: Sort the elements
    stable_sort(elements.begin(), elements.end(), [&freq](const pair<int, int>& a, const pair<int, int>& b) {
        if (freq[a.first] != freq[b.first])
            return freq[a.first] > freq[b.first];  // Sort by frequency
        return a.second < b.second;  // Sort by original appearance in case of tie
    });

    // Step 3: Print the result based on sorted elements
    for (auto& element : elements) {
        for (int i = 0; i < freq[element.first]; ++i) {
            cout << element.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 5, 6, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortByFrequency(arr, n);
    
    return 0;
}
