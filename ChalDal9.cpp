// A similar problem available on LeetCode is "Regular Expression Matching" (Problem 10).

// Problem Statement:
// Given an input string s and a pattern p, implement a function to check if s matches p. The pattern p may contain the special characters:

// . (dot) which matches any single character.
// * (star) which matches zero or more of the preceding element.
// s = "aa"
// p = "a"
// s = "aa"
// p = "a*"

#include <bits/stdc++.h>
using namespace std;

bool recurse(string s, string p, int idx1, int idx2)
{
    int n1 = s.length();
    int n2 = p.length();

    if (idx1 >= n1 && idx2 >= n2)
    {
        return true;
    }
    if (idx1 >= n1 || idx2 >= n2)
    {
        return false;
    }

    if (p[idx2] == '*')
    {
        bool ans1 = recurse(s, p, idx1, idx2 + 1);
        bool ans3 = recurse(s, p, idx1 + 1, idx2);

        return ans1 || ans3;
    }
    else if (p[idx2] == '.')
    {
        return recurse(s, p, idx1 + 1, idx2 + 1);
    }
    else if (s[idx1] == p[idx2])
    {
        return recurse(s, p, idx1 + 1, idx2 + 1);
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{

    while (true)
    {

        string s, p;
        cin >> s >> p;
        cout << (recurse(s, p, 0, 0) ? "true" : "false") << endl;
        return 0;
    }
}
