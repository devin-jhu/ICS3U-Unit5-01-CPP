// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The number game

#include <iostream>
#include <random>
#include <string>


int main() {
    // this function is a guessing game
    int guess;
    int numberAnswer;
    int counter = 1;
    std::string guessString;

    std::random_device rseed;
    // mersenne_twister
    std::mt19937 rgen(rseed());
    // random number between [1,9]
    std::uniform_int_distribution <int> idist(1 , 9);
    numberAnswer = idist(rgen);

    std::cout << "The number game";
    std::cout << "" << std::endl;
    std::cout << "Guess a number between 1 and 9";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> guessString;

    // process & output
    while (true) {
        try {
            guess = std::stoi(guessString);
            if (guess == numberAnswer) {
                break;
            } else if (guess > numberAnswer) {
                std::cout << "Guess lower" << std::endl;
            } else if (guess < numberAnswer) {
                std::cout << "Guess higher" << std::endl;
            } else {
                std::cout << "what happened" << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "not a number" << std::endl;
        }

        std::cout << "Try Again: ";
        std::cin >> guessString;
        counter++;
    }

    // End of game output
    std::cout << "You win! It took " << counter << " tries." << std::endl;
    std::cout << "\nDone." << std::endl;
}
