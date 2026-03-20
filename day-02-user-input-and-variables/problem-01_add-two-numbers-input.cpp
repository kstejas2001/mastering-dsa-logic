// =============================================
// File     : problem-01_add-two-numbers-input.cpp
// Day      : 02 — User Input & Variables
// Topic    : Taking input and adding two numbers
// =============================================

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    c = a + b;

    cout << c;

    return 0;
}