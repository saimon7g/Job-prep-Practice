#include <bits/stdc++.h>
using namespace std;

struct Assignment
{
    string Area, Time;
    vector<int> StudentIds;
};

// Function to get the input data
vector<Assignment> getInput()
{
    vector<Assignment> res = {
        {"Garden", "A", {2, 9, 1}},
        {"Pond", "M", {2, 8, 5}},
        {"FoodCourt", "A", {4, 8, 7}},
        {"Playground", "M", {1, 7, 2}},
        {"PicnicArea", "M", {7, 3, 9}},
        {"Zoo", "A", {6, 3, 2}},
    };
    return res;
}

int main()
{

    // map<pair<int, string>, string> mp;

    // vector<Assignment> assm = getInput();
    // for (const auto &sm : assm)
    // {
    //     for (auto std : sm.StudentIds)
    //     {
    //         string place = sm.Area;
    //         string time = sm.Time;
    //         if (mp.find({std, time}) == mp.end())
    //         {
    //             mp[{std, time}] = place;
    //         }
    //         else
    //         {

    //             cout << "Conflict for student " << std << " at time " << time << " between " << mp[{std, time}] << " and " << place << endl;
    //         }
    //     }
    // }

    vector<Assignment> inputs = getInput();

    map<pair<int, string>, vector<string>> mapping;
    for (Assignment a : inputs)
    {
        for (auto studentId : a.StudentIds)
            mapping[{studentId, a.Time}].push_back(a.Area);
    }

    for (auto k : mapping)
    {
        if (k.second.size() > 1)
        {
            cout << "Student " << k.first.first << " has conflicts at time " << k.first.second << " at : " << endl;

            for (string area : k.second)
            {
                cout << area << " ";
            }
            cout << endl;
        }
    }

    return 0;
}