// Copyright 2022 UNN-IASR
#include <iostream>
#include <string>
#include "fun.h"

int main() {
    char str[1000];
    std::cin.getline(str, 1000);
    std::cout << "Words without numbers: " << faStr1(str) << endl;
    std::cout << "Words with a capital: " << faStr2(str) << endl;
    std::cout << "Average word length: " << faStr3(str) << endl;
    return 0;
}
