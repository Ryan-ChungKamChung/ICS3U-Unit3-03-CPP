// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Finding the magic number game


#include <iostream>
#include <random>


int main() {

    int random_number;
    float magic_number;
    float win;

    std::cout << "Guess the magic number (0-9)!" << std::endl;

    // Input
    std::cout << "Please enter your guess: ";
    std::cin >> magic_number;

    // Process
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0,9);
    random_number = idist(rgen);

    if (magic_number == random_number) {
        // Output
        std::cout << "Nice! Your answer is right!" << std::endl;
    } else {
        std::cout << "Oops! Your answer is wrong!" << std::endl;
        std::cout << "The correct answer was: " << random_number << std::endl;
    }
}
