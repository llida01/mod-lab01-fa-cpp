// Copyright 2022 UNN-IASR
#include <iostream>
#include <string>
#include "fun.h"
using namespace std;

int main() {
    char str[1000];
    cin.getline(str, 1000);
    cout << "Words without numbers: " << faStr1(str) << endl;
    cout << "Words with a capital: " << faStr2(str) << endl;
    cout << "Average word length: " << faStr3(str) << endl;
    return 0;
}
