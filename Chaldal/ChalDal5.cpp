// Given a number n. Find the sum of all even fibonacci numbers less than n.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {

        int n;
        cin >> n;

        int prevprev = 0;
        int prev = 1;
        int ans = 0;

        for (int i = 3; i <= n; i++)
        {
            int curr = prevprev + prev;

            if (!(curr&1))
            {
                ans += curr;
            }
            prevprev=prev;
            prev=curr;
        }

        cout << ans << endl;
    }

    return 0;
}