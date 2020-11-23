// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program calculates the price of a pizza order

#include <iostream>
#include <cmath>

int main() {
    double diameter;
    const double labor = 0.75;
    const double rent = 1;
    const double HST = 1.13;
    double subtotal;
    double total;

    std::cout << "" << std::endl;
    std::cout << "Please enter the diameter of the pizza you"
          "would like to purchase ";
    std::cin >> diameter;
    std::cout << "" << std::endl;
    subtotal = labor + rent +(diameter * 0.50);
    total = floor(subtotal * HST *100)/100;
    std::cout << "The cost of a " << diameter << " inch pizza is: $"
          << total << std::endl;
}
