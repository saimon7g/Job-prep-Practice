// Given a string of characters [0-9]. Convert it to integer.

// "String to Integer (atoi)" (Problem 8)

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int n= s.length();

    int ans=0;

    for(int i=0;i<n;i++){
        ans*=10;
        ans+=(s[i]-'0');
    }

    cout<<ans<<endl;

    return 0;
}