// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 14, 2022
// This program prints "Hello, World!" and has comments

// include all required libraries
#include <iomanip>
#include <iostream>

// initialise constants
const float TAX_RATE_BRITISH_COLUMBIA = 12;

// initialise variables
float subtotal;
float total;

int main() {
    // ask user for subtotal
    std::cout << "What is your subtotal? ";
    std::cin >> subtotal;

    // calculate total
    total = (subtotal * (1 + TAX_RATE_BRITISH_COLUMBIA / 100));

    // display tax and total
    std::cout << std::endl
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << "The tax is "<< TAX_RATE_BRITISH_COLUMBIA
    << "% and your total is: $"<< total;
}
