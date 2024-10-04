// // Find digits from a string( Leading zeroes doesn't get counted)

// 1. LeetCode 8: String to Integer (atoi)
// Problem: Implement the atoi function, which converts a string to an integer.
// Description: This problem involves parsing a string and converting it into an integer while ignoring any leading whitespace and handling different edge cases like signs, overflow, and non-numeric characters.
// Link: LeetCode 8: String to Integer (atoi)
// 2. LeetCode 1291: Sequential Digits
// Problem: Return all numbers that have sequential digits and lie within a given range.
// Description: This problem requires generating numbers that consist of sequential digits (like 123, 456, 789) and lie between a given lower and upper bound.
// Link: LeetCode 1291: Sequential Digits
// 3. LeetCode 1507: Reformat Date
// Problem: Given a date string in a non-standard format, convert it to the YYYY-MM-DD format.
// Description: This problem involves extracting numbers (the day and year) from a string with text (month names) and reformatting them.
// Link: LeetCode 1507: Reformat Date
// 4. LeetCode 93: Restore IP Addresses
// Problem: Given a string containing only digits, return all possible valid IP address combinations.
// Description: This problem involves splitting the string into valid groups of numbers, which could be useful in practicing how to handle digit extraction and conditions for valid numbers.
// Link: LeetCode 93: Restore IP Addresses
// 5. LeetCode 415: Add Strings
// Problem: Given two non-negative integers represented as strings, return the sum of those integers as a string.
// Description: Though this problem involves adding numbers, it requires parsing strings of digits and converting them into numbers, which is somewhat related to the task of extracting digits from a string.
// Link: LeetCode 415: Add Strings
// 6. LeetCode 443: String Compression
// Problem: Compress a string such that consecutive repeating characters are replaced by a single character followed by the number of times it repeats.
// Description: This problem requires working with strings, extracting parts of the string, and replacing them with numbers (the count of characters).
// Link: LeetCode 443: String Compression

#include <bits/stdc++.h>
using namespace std;

vector<int> extractDigits(const string &input)
{
    vector<int> result;
    stringstream ss(input);
    string token;

    // Iterate through the string to find digit sequences
    while (ss >> token)
    {
        string numberStr = "";
        for (char c : token)
        {
            if (isdigit(c))
            {
                numberStr += c; // Collect the digits
            }
            else if (!numberStr.empty())
            {
                // Process the number when non-digit is encountered
                int number = stoi(numberStr); // Convert to int (automatically removes leading zeros)
                result.push_back(number);
                numberStr = "";
            }
        }
        // Push the last number in the token (if any)
        if (!numberStr.empty())
        {
            int number = stoi(numberStr);
            result.push_back(number);
        }
    }

    return result;
}

int main()
{
    string input = "There are 00123 apples and 045 oranges. 78 bananas!";
    vector<int> digits = extractDigits(input);

    // Print the extracted digits
    for (int num : digits)
    {
        cout << num << " ";
    }

    return 0;
}
