// Given an array of integers. Generate all possible subset of the given array.


#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void recurse(vector<int> &arr, vector<int>& vec, int idx)
{
    int n=arr.size();
    if(idx==n){
        print(vec);
        return;
    }
    
    vec.push_back(arr[idx]);
    recurse(arr,vec,idx+1);


    vec.pop_back();
    recurse(arr,vec,idx+1);
}


int main()
{

    vector<int> temp;
    vector<int> arr = {1, 2,3};
    recurse(arr,temp,0);

    cout<<"ghfgghj "<<endl;
    return 0;
}