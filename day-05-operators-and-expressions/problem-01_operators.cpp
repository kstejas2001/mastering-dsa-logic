// =============================================
// File     : problem-01_operators.cpp
// Day      : 05 — Operators and Expressions
// Topic    : Basic operators in C++
// =============================================

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << a + b << endl;   // addition
    cout << a - b << endl;   // subtraction
    cout << a * b << endl;   // multiplication
    cout << a / b << endl;   // division
    cout << a % b << endl;   // remainder

    cout << boolalpha;
    cout << (a == b) << endl;  // equal?
    cout << (a != b) << endl;  // not equal?
    cout << (a > b) << endl;   // greater than?
    cout << (a < b) << endl;   // less than?
    cout << (a >= b) << endl;  // greater than or equal?
    cout << (a <= b) << endl;  // less than or equal?

    return 0;
}