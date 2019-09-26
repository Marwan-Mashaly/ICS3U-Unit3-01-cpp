// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: September 2019
// This program calculates the sum of two integers


#include <iostream>

int main() {
    // This program calculates the sum of two integers
    int integer1;
    int integer2;
    int total;

    // input
    std::cout << "Enter integer1: ";
    std::cin >> integer1;
    std::cout << "Enter integer2: ";
    std::cin >> integer2;

    // process
    total = integer1+integer2;

    // output
    std::cout << "" << std::endl;
    std::cout << integer1 << "+" << integer2 << "=" << total << std::endl;
}
