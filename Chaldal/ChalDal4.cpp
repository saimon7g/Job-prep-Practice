// Given a string of characters. Check if the given string is a palindrome
// LeetCode 125: Valid Palindrome
// Problem: Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
// Link to problem: Valid Palindrome - LeetCode

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{

    while (true)
    {

        string s;
        cin >> s;

        int n = 0;
        while (s[n] != '\0')
        {
            n++;
        }
        bool isPalindrome = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                isPalindrome = false;
                break;
            }
        }
        cout << (isPalindrome ? "Yes" : "No") << endl;
    }
    return 0;
}