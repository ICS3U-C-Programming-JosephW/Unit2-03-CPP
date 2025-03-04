// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Mar. 4, 2025
/* This program asks the user for the diameter of the pizza.
It then calculates and displays the total cost of the pizza with tax. */

// Include stream and manipulation libraries for input/output functions.
#include <iostream>
#include <iomanip>

// Main function to run all of the pizza cost processing.
int main() {
    // Set constants.
    const float HST = 0.13, LABOUR_COST = 2.00,
    RENTAL_COST = 2.25, INGREDIENT_COST = 1.50;

    // Declare variables.
    int diameter;
    float subtotal, tax, total;

    // Get the diameter from the user.
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // Calculate the subtotal.
    subtotal = LABOUR_COST + RENTAL_COST + (diameter * INGREDIENT_COST);

    // Calculate the tax.
    tax = subtotal * HST;

    // Calculate the total amount the pizza costs.
    total = subtotal + tax;

    // Display the total cost.
    std::cout << "\nThe total cost of the pizza is " << "$" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << ".\n";
}
