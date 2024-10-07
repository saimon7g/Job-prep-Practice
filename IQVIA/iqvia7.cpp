// Given a string of characters S and a specific character C. Find the number of occurance of C in S.

#include <bits/stdc++.h>

using namespace std;

int main()
{

    while (1)
    {
        string s;
        cin >> s;
        char c;
        cin >> c;

        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}