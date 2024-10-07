// Given n,Find all primes less than equal n.

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    while (1)
    {

        int n;
        cin >> n;

        for (int i = 2; i <= n; i++)
        {
            if (isPrime(i))
            {
                cout << i << " ";
            }
        }
        cout << endl;

        // int arr[n+1]={0};
        // for(int i=2;i<=n;i++)
        // {
        //     if(arr[i]==0)
        //     {
        //         cout<<i<<" ";
        //         for(int j=i*i;j<=n;j+=i)
        //         {
        //             arr[j]=1;
        //         }
        //     }
        // }
    }
    return 0;
}