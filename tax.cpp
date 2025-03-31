// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 30, 2025
// Program the calculates and displays the tax+total of a purchase
// in British Columbia

#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    // HST Rate of British Columbia
    const float BRITISH_COLUMBIA_HST = 0.12;

    // Get subtotal
    float subtotal;
    std::cout << "Enter subtotal: $";
    std::cin >> subtotal;

    // Calculate tax
    float tax = subtotal * BRITISH_COLUMBIA_HST;
    // Calculate total
    float total = subtotal + tax;

    // Display the subtotal, tax, and total, all rounded to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nYou entered a subtotal of $";
    std::cout << subtotal << std::endl;
    std::cout << "The HST is $";
    std::cout << round(tax * 100) / 100.0;
    std::cout << " and the total is $";
    std::cout << round(total * 100) / 100.0;
    std::cout << std::endl;
}
