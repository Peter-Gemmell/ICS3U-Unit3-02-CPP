// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program is a simple guessing game

#include <iostream>

int main() {
    // This function is a simple guessing game
    const float mystery_number = 7;
    int guess_number;

    // Input
    std::cout << "Guess a number between 0-9 : ";
    std::cin >> guess_number;

    // Process & Output
    if (guess_number == mystery_number) {
        std::cout << "You guessed correctly!";
            std::cout << std::endl;
            std::cout << "Done." << std::endl;
    }
    if (guess_number != mystery_number) {
        std::cout << "You Guessed Incorrectly." << std::endl;
        std::cout << std::endl;
        std::cout << "Done." << std::endl;
    }
}
