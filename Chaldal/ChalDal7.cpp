// Given an array of integers. Generate all possible permutation of the given array.

#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void recurse(vector<int> &arr, vector<int> &vec, vector<bool> &used)
{

    if (arr.size() == vec.size())
    {
        print(vec);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {

        if (used[i] == false)
        {
            used[i] = true;
            vec.push_back(arr[i]);
            recurse(arr, vec, used);
            vec.pop_back();
            used[i] = false;
        }
    }
}

int main()
{

    vector<int> temp;
    vector<int> arr = {1, 2, 3, 4};
    vector<bool> used(4, false);
    recurse(arr, temp, used);
    cout << "ghfgghj " << endl;
    return 0;
}