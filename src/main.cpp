// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>
#include <string>

int main() {
    const char* str;
    str = "qwe4  gftt e 555gr rrgr  grhh ";
    std::cout << faStr1(str) << endl;
    str = "Hello, world!";
    std::cout << faStr2(str) << endl;
    str = " six monkeys";
    std::cout << faStr3(str) << endl;
    return 0;
}
