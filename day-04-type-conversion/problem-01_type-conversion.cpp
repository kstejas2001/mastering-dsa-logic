// =============================================
// File     : problem-01_type-conversion.cpp
// Day      : 04 — Type Conversion
// Topic    : Converting data types in C++
// =============================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    // string to number
    string a = "5";
    string b = "3";

    int numA = stoi(a);
    int numB = stoi(b);

    int c = numA + numB;
    cout << c << endl;

    // number to text
    int x = 10;
    string y = to_string(x);

    cout << y << endl;

    // whole number to decimal
    double z = x;
    cout << z << endl;

    return 0;
}