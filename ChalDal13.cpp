// Write a function which converts decimal number to hexadecimal

// A LeetCode problem that is closely related to converting a decimal number to hexadecimal is:

// LeetCode 405: Convert a Number to Hexadecimal
// Problem: Given an integer, write an algorithm to convert it to hexadecimal. For negative numbers, two’s complement method is used.

// Description: You need to implement a function that takes a 32-bit signed integer as input and returns its hexadecimal representation. Negative numbers should be handled using the two's complement system, which is typical in systems with fixed-width integers.

// Link: LeetCode 405: Convert a Number to Hexadecimal





#include <iostream>
using namespace std;

string decimalToHex(int decimal) {
    if (decimal == 0) return "0";  // Special case for 0

    string hex = "";
    string hexDigits = "0123456789ABCDEF";  // Hexadecimal digits
    
    while (decimal > 0) {
        int remainder = decimal % 16;  // Get remainder (hex digit)
        hex = hexDigits[remainder] + hex;  // Prepend the corresponding hex digit
        decimal /= 16;  // Divide by 16 for next iteration
    }

    return hex;
}

int main() {
    int decimal = 12345;  // Example number
    cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
    return 0;
}
