// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop adder

#include <iostream>

int main() {
    // this program shows the sum of all numbers from 0 to number

    // process & output
    for (int counter = 1000; counter < 2001; counter++) {
            if (counter % 5 == 0) {
                std::cout << "" << std::endl;
                std::cout << counter << " ";
            } else {
                std::cout << counter << " ";
            }
        }
    std::cout << "\nDone." << std::endl;
}
