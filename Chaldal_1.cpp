#include<bits/stdc++.h>

using namespace std;

// io  ---> 4 2 1
// command to run the code is: g++ -std=c++11 -o Chaldal_1 Chaldal_1.cpp && ./Chaldal_1
// You have been provided a spiral matrix of size NXN along with a coordinate (x, y) as follows. Find the element at the position (x, y) of the matrix. N = 4, x = 2, y =1
// 1	2	3	4
// 12	13	14	5
// 11	16	15	6
// 10	9	8	7

int main (  ) {

    int n, x,y;
    cin >> n >> x >> y;

    int arr[n][n];

    int cnt=1;
    int left=0, right=n, top=0, bottom=n;
    while(cnt<= n*n){
        for(int i=left; i<right; i++){
            arr[top][i] = cnt++;
        }
        top++;  
        for(int i=top; i<bottom; i++){
            arr[i][right-1] = cnt++;
        }
        right--;
        for(int i=right-1; i>=left; i--){
            arr[bottom-1][i] = cnt++;
        }
        bottom--;
        for(int i=bottom-1; i>=top; i--){
            arr[i][left] = cnt++;
        }
        left++;
    }

    cout << arr[x-1][y-1] << endl;
    return 0;
}