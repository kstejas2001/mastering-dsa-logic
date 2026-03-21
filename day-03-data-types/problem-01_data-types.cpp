// =============================================
// File     : problem-01_data-types.cpp
// Day      : 03 — Data Types
// Topic    : Basic data types in C++
// =============================================

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float price = 99.5;
    string name = "Crazy";
    bool is_student = true;

    cout << age << endl;
    cout << price << endl;
    cout << name << endl;
    cout << boolalpha << is_student << endl;

    return 0;
}