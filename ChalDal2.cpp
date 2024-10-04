// command: g++ -o ChalDal2 ChalDal2.cpp && ./ChalDal2
// Example 1:
// Input:
// "III"

// Output:
// 3
// Explanation:
// III = 1 + 1 + 1 = 3

// Example 2:
// Input:
// "IV"

// Output:
// 4
// Explanation:
// IV = 5 - 1 = 4 (Special case where a smaller numeral precedes a larger one)

// Example 3:
// Input:
// "IX"

// Output:
// 9
// Explanation:
// IX = 10 - 1 = 9 (Special case)

// Example 4:
// Input:
// "LVIII"

// Output:
// 58
// Explanation:
// LVIII = 50 + 5 + 1 + 1 + 1 = 58

// Example 5:
// Input:
// "MCMXCIV"

// Output:
// 1994
// Explanation:
// M = 1000
// CM = 1000 - 100 = 900
// XC = 100 - 10 = 90
// IV = 5 - 1 = 4
// Total: 1000 + 900 + 90 + 4 = 1994

// Example 6:
// Input:
// "MMXXIV"

// Output:
// 2024
// Explanation:
// MM = 2000
// XX = 10 + 10 = 20
// IV = 5 - 1 = 4
// Total: 2000 + 20 + 4 = 2024








#include<bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
    while(true){

    string s;
    cin >> s;

    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
    
    int ans = 0;
    int n=s.length();

    for(int i=0 ;i<n;i++){
        if(i+1<n && roman[s[i+1]]>roman[s[i]]){
            ans+= roman[s[i+1]] - roman[s[i]];
            i++;
        }
        else{
            ans+= roman[s[i]];

        }
    }

    cout<<ans<<endl;
}
    return 0;
}