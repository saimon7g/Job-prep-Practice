// // Given two numbers represented as arrays of characters in decimal format,
// add them and return the result in the same format. For example,
// Input: ['1', '2', '3'] and ['4', '5', '6'] Output: Output: ['5', '7', '9']

// LeetCode 415: Add Strings
// Problem: Given two non-negative integers represented as strings, return the sum of these integers, also represented as a string. The input strings are large, and you are not allowed to use any built-in library for handling large integers (such as BigInteger).

// Description: This problem involves adding two strings representing large numbers in a manner similar to how you would perform addition manually—by adding digit by digit from the right side, carrying over any excess.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<char> num1 = {'1', '2', '3'};
    vector<char> num2 = {'4', '5', '6'};

    int carry = 0;
    vector<char> result;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += num1[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += num2[j] - '0';
            j--;
        }
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }

    reverse(result.begin(), result.end());

    for (char c : result)
    {
        cout << c << " ";
    }

    return 0;
}