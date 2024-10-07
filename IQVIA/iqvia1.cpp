// Given a string of lowercase characters. 
// Find the count of characters which only occured once in the string.


#include <bits/stdc++.h>

using namespace std;

int main()
{

    while (1)
    {
        string s;
        cin >> s;

        int arr[26] = {0};

        for(int i = 0; i < s.length(); i++)
        {
            arr[s[i] - 'a']++;
        }
        int count = 0;
        for(int i = 0; i < 26; i++)
        {
            if(arr[i] == 1)
            {
                count++;
            }
        }

        cout << count << endl;

    }
    return 0;
}