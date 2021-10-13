// Copyright (c) 2021 Daniel Pawelko All rights reserved
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program calculates circumference of a circle with given radius

#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of circle (cm): ";
    std::cin >> radius;

    // process
    circumference = radius * TAU;

    // output
    std::cout << "" << std::endl;
    std::cout << "If the radius of a circle is: ";
    std::cout << radius << " cm" << std::endl;
    std::cout << "The circumference would roughly be: ";
    std::cout << circumference << " cm" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
