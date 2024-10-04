// LeetCode 344: Reverse String
// Problem: Write a function that reverses a string. The input string is given as an array of characters s. You must do this by modifying the input array in place with O(1) extra memory.
// Link to problem: Reverse String - LeetCode

// Given a string of characters. Reverse the string without using any library function.

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

        for (int i = 0; i < n / 2; i++)
        {

            char c = s[n - 1 - i];
            s[n - 1 - i] = s[i];
            s[i] = c;
        }

        cout << s << endl;
    }
    return 0;
}